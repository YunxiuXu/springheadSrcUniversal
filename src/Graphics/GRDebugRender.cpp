/*
 *  Copyright (c) 2003-2008, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#include "Graphics.h"
#pragma hdrstop
#include <Physics/PHConstraintEngine.h>
#include <Physics/PHContactPoint.h>
#include <Physics/PHIK.h>
#include <Physics/PHBallJoint.h>
#include <GL/glut.h>

namespace Spr {;
//----------------------------------------------------------------------------
//	GRDebugRender
/// コンストラクタ
GRDebugRender::GRDebugRender(){
	matSampleCount = 24;		// 24種類
	matSample.resize(matSampleCount);
	std::vector<GRMaterialDesc>::iterator itr;
	itr = matSample.begin();
	(itr++)->diffuse = Vec4f(1.0, 0.0, 0.0, 1.0);			// red
	(itr++)->diffuse = Vec4f(0.0, 1.0, 0.0, 1.0);			// green
	(itr++)->diffuse = Vec4f(0.0, 0.0, 1.0, 1.0);			// blue
	(itr++)->diffuse = Vec4f(1.0, 1.0, 0.0, 1.0);			// yellow
	(itr++)->diffuse = Vec4f(0.0, 1.0, 1.0, 1.0);			// cyan
	(itr++)->diffuse = Vec4f(1.0, 0.0, 1.0, 1.0);			// magenta
	(itr++)->diffuse = Vec4f(1.0, 1.0, 1.0, 1.0);			// white
	(itr++)->diffuse = Vec4f(0.5, 0.5, 0.5, 1.0);			// gray
	(itr++)->diffuse = Vec4f(1.0, 0.27, 0.0, 1.0);			// orange
	(itr++)->diffuse = Vec4f(0.198, 0.0, 0.0, 1.0);			// blown
	(itr++)->diffuse = Vec4f(0.676, 0.844, 0.898, 1.0);		// light blue
	(itr++)->diffuse = Vec4f(0.574, 0.438, 0.855, 1.0);		// midium purple
	(itr++)->diffuse = Vec4f(0.0, 0.391, 0.0, 1.0);			// dark green
	(itr++)->diffuse = Vec4f(0.578, 0.0, 0.824, 1.0);		// dark violet
	(itr++)->diffuse = Vec4f(0.0, 0.543, 0.543, 1.0);		// dark cyan
	(itr++)->diffuse = Vec4f(0.676, 1.0, 0.184, 1.0);		// green yellow
	(itr++)->diffuse = Vec4f(0.195, 0.801, 0.195, 1.0);		// lime green
	(itr++)->diffuse = Vec4f(0.801, 0.359, 0.359, 1.0);		// indian red
	(itr++)->diffuse = Vec4f(0.293, 0.0, 0.508, 1.0);		// indigo
	(itr++)->diffuse = Vec4f(0.0, 0.198, 0.198, 1.0);		// green indigo
	(itr++)->diffuse = Vec4f(0.198, 0.398, 0.0, 1.0);		// olive green
	(itr++)->diffuse = Vec4f(0.198, 0.398, 0.797, 1.0);		// navy blue
	(itr++)->diffuse = Vec4f(0.398, 1.0, 0.797, 1.0);		// turquoise blue
	(itr++)->diffuse = Vec4f(0.598, 1.0, 0.398, 1.0);		// emerald green
	for(std::vector<GRMaterialDesc>::iterator it=matSample.begin(); it!= matSample.end(); ++it){
		it->diffuse += Vec4f(0.5,0.5,0.5,1);
		it->diffuse /= 2;
	}
	modeSolid		= true;
	modeWire		= false;
	renderAxis		= false;
	renderForce		= false;
	renderWorldAxis = false;
	renderGrid		= false;
	gridY			= 0.0;
	gridSpan		= 1.0;
}

/// シーン内の全てのオブジェクトをレンダリングする
void GRDebugRender::DrawScene(PHSceneIf* scene){
	if (!scene) return;
	if(renderWorldAxis) DrawWorldAxis(scene);
	PHSolidIf **solids = scene->GetSolids();
	for(int i = 0; i < scene->NSolids(); ++i){
		SetMaterialSample((GRDebugRenderIf::TMaterialSample)i);
		DrawSolid(solids[i]);
	}
	if(renderGrid) DrawGrid(gridY, gridSpan);
	SetMaterialSample((GRDebugRenderIf::TMaterialSample)0);
	for(int i = 0; i < scene->NJoints(); ++i){
		DrawConstraint(scene->GetJoint(i));
	}
	if(renderContact){
		SetMaterialSample((GRDebugRenderIf::TMaterialSample)1);
		for(int i = 0; i < scene->NContacts(); ++i){
			DrawConstraint(scene->GetContact(i));
			DrawContact(scene->GetContact(i));
		}
	}
	if(renderIK){
		SetMaterialSample((GRDebugRenderIf::TMaterialSample)2);
		PHIKEngineIf* ikEngine = scene->GetIKEngine();
		if (ikEngine) {
			DrawIK(ikEngine);
		}
	}
}

/// IKの計算結果をレンダリングする
void GRDebugRender::DrawIK(PHIKEngineIf* ikEngine) {
	SetLighting(false);
	SetDepthTest(false);
	this->PushModelMatrix();
	this->SetModelMatrix(Affinef());

	for (size_t i=0; i < DCAST(PHIKEngine,ikEngine)->nodes.size(); ++i) {
		PHIKNodeIf* ikNode = DCAST(PHIKEngine,ikEngine)->nodes[i];
		if (ikNode) {
			PHIKBallJointIf* ikBJ = ikNode->Cast();
			if (ikBJ) {
				PHIKBallJoint* bj = ikBJ->Cast();
				Vec3d dT = Vec3d();
				for (int j=0; j < bj->ndof; ++j) {
					dT += (bj->dTheta[j]/bj->bias) * bj->e[j];
				}
				PHBallJoint* jt = DCAST(PHBallJoint,bj->joint);
				PHBallJointDesc d; jt->GetDesc(&d);
				Vec3d Pj = jt->solid[0]->GetPose() * d.poseSocket * Vec3d(0,0,0);

				{
					GRMaterialDesc mat;
					mat.ambient = mat.diffuse = Vec4f(1,0,0.7,1);
					SetMaterial(mat);
					DrawLine(Pj, Pj + (dT * scaleIK));
				}

				{
					GRMaterialDesc mat;
					mat.ambient = mat.diffuse = Vec4f(1.0,0,0,1);
					SetMaterial(mat);
					for (int j=0; j < bj->ndof; ++j) {
						DrawLine(Pj, Pj + (bj->e[j]));
					}
				}
			}
		}
	}

	for (size_t i=0; i < DCAST(PHIKEngine,ikEngine)->controlpoints.size(); ++i) {
		PHIKControlPointIf* ikCP = DCAST(PHIKEngine,ikEngine)->controlpoints[i];
		if (ikCP && DCAST(PHIKControlPoint,ikCP)->isEnabled) {
			PHIKPosCtlIf* ikP = ikCP->Cast();
			if (ikP) {
				PHIKPosCtl* pc = ikP->Cast();

				Vec3d sp = pc->solid->GetPose() * pc->pos;
				Vec3d tg = pc->GetTmpGoal();
				{
					GRMaterialDesc mat;
					mat.ambient = mat.diffuse = Vec4f(0,1.0,0,1);
					SetMaterial(mat);
					DrawLine(sp, sp + tg);
				}
			}
		}
	}

	this->PopModelMatrix();
	SetLighting(true);
	SetDepthTest(true);
}

/// シーンのワールド座標系の座標軸をレンダリングする
void GRDebugRender::DrawWorldAxis(PHSceneIf* scene){
	if (!scene) return;
	glBegin(GL_LINES);
		//x軸（赤）
		GRMaterialDesc material;
		material.ambient  = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.emissive = Vec4d(1.0, 0.0, 0.0, 1.0);
		material.diffuse  = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.specular = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.power	  = 0.0;
		this->SetMaterial(material);
		glVertex3d(	 0.0,   0.0,   0.0);
		glVertex3d(100.0,   0.0,   0.0);	//< 長さ100位でいいかな
		//y軸（緑）
		material = GRMaterialDesc();
		material.ambient  = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.emissive = Vec4d(0.0, 1.0, 0.0,1.0);
		material.diffuse  = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.specular = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.power	  = 0.0;
		this->SetMaterial(material);
		glVertex3d(	 0.0,   0.0,   0.0);
		glVertex3d(  0.0, 100.0,   0.0);
		//z軸（青）
		material = GRMaterialDesc();
		material.ambient  = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.emissive = Vec4d(0.0, 0.0, 1.0,1.0);
		material.diffuse  = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.specular = Vec4d(0.0, 0.0, 0.0, 0.0);
		material.power	  = 0.0;
		this->SetMaterial(material);
		glVertex3d(  0.0,   0.0,   0.0);
		glVertex3d(  0.0,   0.0, 100.0);
	glEnd();
}


/// 剛体をレンダリングする
void GRDebugRender::DrawSolid(PHSolidIf* so){
	Affinef soaf;
	so->GetPose().ToAffine(soaf);
	this->PushModelMatrix();
	this->MultModelMatrix(soaf);
	
	for(int s=0; s<so->NShape(); ++s){
		CDShapeIf* shape = so->GetShape(s);

		Affinef af;
		so->GetShapePose(s).ToAffine(af);
		this->PushModelMatrix();
		this->MultModelMatrix(af);
		
		CDConvexMeshIf* mesh = DCAST(CDConvexMeshIf, shape);
		if (mesh){
			if(modeSolid)
				DrawMesh(mesh, true);
			if(modeWire)
				DrawMesh(mesh, false);
		}
		CDSphereIf* sphere = DCAST(CDSphereIf, shape);
		if (sphere){
			float r = sphere->GetRadius();
			if(modeSolid)
				glutSolidSphere(r, 16, 16);
			if(modeWire)
				glutWireSphere(r, 16, 16);
		}
		CDCapsuleIf* cap = DCAST(CDCapsuleIf, shape);
		if (cap){
			if(modeSolid)
				DrawCapsule(cap, true);
			if(modeWire)
				DrawCapsule(cap, false);
		}
		CDRoundConeIf* rc = DCAST(CDRoundConeIf, shape);
		if (rc){
			if(modeSolid)
				DrawRoundCone(rc, true);
			if(modeWire)
				DrawRoundCone(rc, false);
		}
		CDBoxIf* box = DCAST(CDBoxIf, shape);
		if (box){
			Vec3f boxsize = box->GetBoxSize();
			glScalef(boxsize.x, boxsize.y, boxsize.z);	
			if(modeSolid)
				glutSolidCube(1.0);		
			if(modeWire)
				glutWireCube(1.0);
		}
		this->PopModelMatrix();

		// 剛体のローカル座標軸を表示する．
		if(renderAxis)
			DrawCoordinateAxis(modeSolid);
	}

	this->PopModelMatrix();
}

void GRDebugRender::DrawConstraint(PHConstraintIf* conif){
	PHConstraint* con = conif->Cast();
	Affinef af;
	Vec3d f, t;

	if(renderAxis || renderForce){
		// socket
		(con->solid[0]->GetPose() * con->poseSocket).ToAffine(af);
		this->PushModelMatrix();
		this->MultModelMatrix(af);
		if(renderAxis)	
			DrawCoordinateAxis(modeSolid);
		// constraint force
		if(renderForce){
			con->GetConstraintForce(f, t);

			SetLighting(false);
			SetDepthTest(false);

			GRMaterialDesc mat;
			mat.ambient = mat.diffuse = Vec4f(1,0.7,0,1);
			SetMaterial(mat);
			DrawLine(Vec3d(), f * scaleForce);
			
			mat.ambient = mat.diffuse = Vec4f(0,0.5,0.2,1);
			SetMaterial(mat);
			DrawLine(Vec3d(), t * scaleForce);

			SetDepthTest(true);
			SetLighting(true);
		}
		this->PopModelMatrix();
	}
	if(renderAxis){
		// plug
		GRMaterialDesc mat;
		mat.ambient = mat.diffuse = Vec4f(1,0,0,1);
		SetMaterial(mat);
		SetLighting(false);
		SetDepthTest(false);
		(con->solid[1]->GetPose() * con->posePlug).ToAffine(af);
		this->PushModelMatrix();
		this->MultModelMatrix(af);
		DrawCoordinateAxis(modeSolid);
		this->PopModelMatrix();
		SetLighting(true);
		SetDepthTest(true);
	}
}

void GRDebugRender::DrawContact(PHContactPointIf* con){
	if(!renderContact || !con)
		return;
	PHContactPoint* c = con->Cast();
	if(c->shapePair->section.size() < 3)
		return;
	std::vector<Vec3f> vtx;
	vtx.resize(c->shapePair->section.size());
	copy(c->shapePair->section.begin(), c->shapePair->section.end(), vtx.begin());
	
	SetVertexFormat(GRVertexElement::vfP3f);
	GRMaterialDesc mat;
	mat.ambient = mat.diffuse = Vec4f(1,1,0,1);
	SetMaterial(mat);
	SetLighting(false);
	SetDepthTest(false);
	DrawDirect(GRRenderBaseIf::LINE_LOOP, &vtx[0], vtx.size());
	SetDepthTest(true);
	SetLighting(true);
}

void GRDebugRender::DrawRoundCone(CDRoundConeIf* rc, bool solid){
	Vec2d r = rc->GetRadius();
	float l = rc->GetLength();
	this->PushModelMatrix();
	
	float normal_Z = (r[0] - r[1]) / l;
	if (-M_PI/2.0 < normal_Z && normal_Z < M_PI/2.0) {
		float theta = acos(normal_Z);
		float R0 =  r[0] * sin(theta);
		float Z0 = -l/2.0 + r[0]*cos(theta);
		float R1 =  r[1] * sin(theta);
		float Z1 =  l/2.0 + r[1]*cos(theta);

		int slice = 20;

		// 側面を描画
		glBegin(solid ? GL_QUAD_STRIP : GL_LINES);
		float step = (float)(M_PI * 2.0f) / (float)slice;
		float t = 0.0;
		float x,y,st;
		for (int i=0; i<=slice; i++) {
			x=sin(t);
			y=cos(t);
			st = sin(theta);
			glNormal3f(x*st, y*st, cos(theta));
			glVertex3f(R0 * x, R0 * y, Z0);
			glVertex3f(R1 * x, R1 * y, Z1);
			t += step;
		}
		glEnd();
	}

	glTranslatef(0,0,-l/2);
	solid ? glutSolidSphere(r[0], 20, 20) : glutWireSphere(r[0], 20, 20);
	glTranslatef(0,0,l);
	solid ? glutSolidSphere(r[1], 20, 20) : glutWireSphere(r[1], 20, 20);
	this->PopModelMatrix();
}

void GRDebugRender::DrawCapsule(CDCapsuleIf* cap, bool solid){
	float r = cap->GetRadius();
	float l = cap->GetLength();
	this->PushModelMatrix();

	DrawCylinder(r, l, 20, solid);

	glTranslatef(0,0,-l/2);
	solid ? glutSolidSphere(r, 20, 20) : glutWireSphere(r, 20, 20);
	glTranslatef(0,0,l);
	solid ? glutSolidSphere(r, 20, 20) : glutWireSphere(r, 20, 20);
	this->PopModelMatrix();
}

void GRDebugRender::DrawMesh(CDConvexMeshIf* mesh, bool solid){
	Vec3f* base = mesh->GetVertices();
	if(solid){
		for (size_t f=0; f<mesh->NFace(); ++f) {	
			CDFaceIf* face = mesh->GetFace(f);
			this->DrawFaceSolid(face, base);
		}
	}
	else{
		for (size_t f=0; f<mesh->NFace(); ++f) {	
			CDFaceIf* face = mesh->GetFace(f);
			this->DrawFaceWire(face, base);
		}
	}
}

void GRDebugRender::DrawAxis(bool solid){
	this->PushModelMatrix();
	this->MultModelMatrix(Affinef::Trn(0.0f, 0.0f, 0.5f));
	DrawCylinder(0.1f, 1.0f, 4, solid);
	this->MultModelMatrix(Affinef::Trn(0.0f, 0.0f, 0.5f));
	DrawCone(0.2f, 0.3f, 8, solid);
	this->PopModelMatrix();
}

void GRDebugRender::DrawCoordinateAxis(bool solid){
	SetVertexFormat(GRVertexElement::vfP3f);
	PushModelMatrix();
	MultModelMatrix(Affinef::Scale(scaleAxis, scaleAxis, scaleAxis));
	// シンプルに線分三本
#if 1
	float vtx[4][3] = {{0.0f, 0.0f, 0.0f}, {1.0f, 0.0f, 0.0f}, {0.0f, 1.0f, 0.0f}, {0.0f, 0.0f, 1.0f}};
	size_t idx[6] = {0, 1, 0, 2, 0, 3};
	DrawIndexed(GRRenderBaseIf::LINES, idx, (void*)vtx, 6);
	PopModelMatrix();
#elif 0
	// 太さのある矢印
	// z
	SetMaterialSample(GRDebugRenderIf::BLUE);
	DrawAxis(solid);
	// x
	SetMaterialSample(GRDebugRenderIf::RED);
	this->PushModelMatrix();
	this->MultModelMatrix(Affinef::Rot(0.5f*M_PI, 'y'));
	DrawAxis(solid);
	this->PopModelMatrix();
	// y
	SetMaterialSample(GRDebugRenderIf::GREEN);
	this->PushModelMatrix();
	this->MultModelMatrix(Affinef::Rot(-0.5f*M_PI, 'x'));
	DrawAxis(solid);
	this->PopModelMatrix();	
#else
	// 箱で表現
	double length=0.5, width=length/10.0;
	this->PushModelMatrix();
	glTranslatef(length/2, 0, 0); glScalef(length, width, width); glutSolidCube(1.0);
	this->PopModelMatrix();
	this->PushModelMatrix();
	glTranslatef(0, length/2, 0); glScalef(width, length, width); glutSolidCube(1.0);
	this->PopModelMatrix();
	this->PushModelMatrix();
	glTranslatef(0, 0, length/2); glScalef(width, width, length); glutSolidCube(1.0);
	this->PopModelMatrix();
#endif
}

void GRDebugRender::DrawLine(const Vec3d& p0, const Vec3d& p1){
	SetVertexFormat(GRVertexElement::vfP3f);
	glBegin(GL_LINES);
	glVertex3dv((const double*)&p0);
	glVertex3dv((const double*)&p1);
	glEnd();
}

void GRDebugRender::DrawFaceSolid(CDFaceIf* face, Vec3f * base){
	int numIndices = face->NIndex();			// (=3 :三角形なので3頂点)
	struct Vtx{
		Vec3f n;
		Vec3f p;
	} vtxs[10];
	assert((size_t)numIndices <= sizeof(vtxs)/sizeof(vtxs[0]));
	for(int v = 0; v < numIndices; ++v)
		vtxs[v].p = base[face->GetIndices()[v]].data;
	Vec3f edge0, edge1;
	edge0 = vtxs[1].p - vtxs[0].p;
	edge1 = vtxs[2].p - vtxs[0].p;
	Vec3f n = (edge0^edge1).unit();
	for(int v = 0; v < numIndices; ++v)
		vtxs[v].n = n;
	SetVertexFormat(GRVertexElement::vfN3fP3f);
	DrawDirect(GRRenderBaseIf::TRIANGLE_FAN, vtxs, numIndices);
}

void GRDebugRender::DrawFaceWire(CDFaceIf* face, Vec3f * base){
	int numIndices = face->NIndex();
	Vec3f vtxs[10];
	assert((size_t)numIndices+1 <= sizeof(vtxs)/sizeof(vtxs[0]));
	int v;
	for(v = 0; v < numIndices; ++v)
		vtxs[v] = base[face->GetIndices()[v]].data;
	vtxs[v] = base[face->GetIndices()[0]].data;
	SetVertexFormat(GRVertexElement::vfP3f);
	SetLighting(false);
	DrawDirect(GRRenderBaseIf::LINES, vtxs, numIndices+1);
	SetLighting(true);
}

void GRDebugRender::SetMaterialSample(GRDebugRenderIf::TMaterialSample matname){
	int matID = 0;
	if (matname >= GRDebugRenderIf::MATERIAL_SAMPLE_END) {
		matID = (int)matname;
		matID = matID % matSampleCount;
	} else {
		matID = (int)matname;
	}
	this->SetMaterial(matSample[matID]);
}

void GRDebugRender::DrawGrid(double y, double span){
	double range = 5000;
	GRMaterialDesc mat;
	mat.ambient	 = Vec4f();
	mat.emissive = Vec4f(0.6, 0.6, 0.6, 1.0);
	mat.diffuse	 = Vec4f();
	mat.specular = Vec4f();
	mat.power	 = 0.0;
	this->SetMaterial(mat);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	for(int i = 0; i < (int)2*(range/span); i++){
		glVertex3d(i * span - range, y, -range);
		glVertex3d(i * span - range, y,  range);
		glVertex3d(-range, y, i * span -range);
		glVertex3d( range, y, i * span -range);
	}
	glEnd();
}
}	//	Spr

