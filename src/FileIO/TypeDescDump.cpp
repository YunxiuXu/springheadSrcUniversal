//	Do not edit. MakeTypeDesc.bat will update this file.
	
	PHMaterial* pPHMaterial = NULL;
	desc = new FITypeDesc("PHMaterial");
	field = desc->AddField("", "float", "mu", "");
	field->offset = (char*)&(pPHMaterial->mu) - (char*)pPHMaterial;
	field->size = sizeof(pPHMaterial->mu);
	field = desc->AddField("", "float", "mu0", "");
	field->offset = (char*)&(pPHMaterial->mu0) - (char*)pPHMaterial;
	field->size = sizeof(pPHMaterial->mu0);
	field = desc->AddField("", "float", "e", "");
	field->offset = (char*)&(pPHMaterial->e) - (char*)pPHMaterial;
	field->size = sizeof(pPHMaterial->e);
	db->RegisterDesc(desc);
	
	CDShapeDesc* pCDShapeDesc = NULL;
	desc = new FITypeDesc("CDShapeDesc");
	db->RegisterDesc(desc);
	
	CDConvexMeshDesc* pCDConvexMeshDesc = NULL;
	desc = new FITypeDesc("CDConvexMeshDesc");
	field = desc->AddField("vector", "Vec3f", "vertices", "");
	field->offset = (char*)&(pCDConvexMeshDesc->vertices) - (char*)pCDConvexMeshDesc;
	field->size = sizeof(pCDConvexMeshDesc->vertices);
	field = desc->AddField("", "PHMaterial", "material", "");
	field->offset = (char*)&(pCDConvexMeshDesc->material) - (char*)pCDConvexMeshDesc;
	field->size = sizeof(pCDConvexMeshDesc->material);
	db->RegisterDesc(desc);
	
	GRLight* pGRLight = NULL;
	desc = new FITypeDesc("GRLight");
	field = desc->AddField("", "Vec4f", "diffuse", "");
	field->offset = (char*)&(pGRLight->diffuse) - (char*)pGRLight;
	field->size = sizeof(pGRLight->diffuse);
	field = desc->AddField("", "Vec4f", "specular", "");
	field->offset = (char*)&(pGRLight->specular) - (char*)pGRLight;
	field->size = sizeof(pGRLight->specular);
	field = desc->AddField("", "Vec4f", "ambient", "");
	field->offset = (char*)&(pGRLight->ambient) - (char*)pGRLight;
	field->size = sizeof(pGRLight->ambient);
	field = desc->AddField("", "Vec4f", "position", "");
	field->offset = (char*)&(pGRLight->position) - (char*)pGRLight;
	field->size = sizeof(pGRLight->position);
	field = desc->AddField("", "float", "range", "");
	field->offset = (char*)&(pGRLight->range) - (char*)pGRLight;
	field->size = sizeof(pGRLight->range);
	field = desc->AddField("", "float", "attenuation0", "");
	field->offset = (char*)&(pGRLight->attenuation0) - (char*)pGRLight;
	field->size = sizeof(pGRLight->attenuation0);
	field = desc->AddField("", "float", "attenuation1", "");
	field->offset = (char*)&(pGRLight->attenuation1) - (char*)pGRLight;
	field->size = sizeof(pGRLight->attenuation1);
	field = desc->AddField("", "float", "attenuation2", "");
	field->offset = (char*)&(pGRLight->attenuation2) - (char*)pGRLight;
	field->size = sizeof(pGRLight->attenuation2);
	field = desc->AddField("", "Vec3f", "spotDirection", "");
	field->offset = (char*)&(pGRLight->spotDirection) - (char*)pGRLight;
	field->size = sizeof(pGRLight->spotDirection);
	field = desc->AddField("", "float", "spotFalloff", "");
	field->offset = (char*)&(pGRLight->spotFalloff) - (char*)pGRLight;
	field->size = sizeof(pGRLight->spotFalloff);
	field = desc->AddField("", "float", "spotInner", "");
	field->offset = (char*)&(pGRLight->spotInner) - (char*)pGRLight;
	field->size = sizeof(pGRLight->spotInner);
	field = desc->AddField("", "float", "spotCutoff", "");
	field->offset = (char*)&(pGRLight->spotCutoff) - (char*)pGRLight;
	field->size = sizeof(pGRLight->spotCutoff);
	db->RegisterDesc(desc);
	
	GRMaterial* pGRMaterial = NULL;
	desc = new FITypeDesc("GRMaterial");
	field = desc->AddField("", "Vec4f", "diffuse", "");
	field->offset = (char*)&(pGRMaterial->diffuse) - (char*)pGRMaterial;
	field->size = sizeof(pGRMaterial->diffuse);
	field = desc->AddField("", "Vec4f", "ambient", "");
	field->offset = (char*)&(pGRMaterial->ambient) - (char*)pGRMaterial;
	field->size = sizeof(pGRMaterial->ambient);
	field = desc->AddField("", "Vec4f", "specular", "");
	field->offset = (char*)&(pGRMaterial->specular) - (char*)pGRMaterial;
	field->size = sizeof(pGRMaterial->specular);
	field = desc->AddField("", "Vec4f", "emissive", "");
	field->offset = (char*)&(pGRMaterial->emissive) - (char*)pGRMaterial;
	field->size = sizeof(pGRMaterial->emissive);
	field = desc->AddField("", "float", "power", "");
	field->offset = (char*)&(pGRMaterial->power) - (char*)pGRMaterial;
	field->size = sizeof(pGRMaterial->power);
	
	PHSolidState* pPHSolidState = NULL;
	desc = new FITypeDesc("PHSolidState");
	field = desc->AddField("", "Vec3d", "velocity", "");
	field->offset = (char*)&(pPHSolidState->velocity) - (char*)pPHSolidState;
	field->size = sizeof(pPHSolidState->velocity);
	field = desc->AddField("", "Vec3d", "angVelocity", "");
	field->offset = (char*)&(pPHSolidState->angVelocity) - (char*)pPHSolidState;
	field->size = sizeof(pPHSolidState->angVelocity);
	field = desc->AddField("", "Vec3d", "center", "");
	field->offset = (char*)&(pPHSolidState->center) - (char*)pPHSolidState;
	field->size = sizeof(pPHSolidState->center);
	field = desc->AddField("", "Posed", "pose", "");
	field->offset = (char*)&(pPHSolidState->pose) - (char*)pPHSolidState;
	field->size = sizeof(pPHSolidState->pose);
	field = desc->AddField("", "Vec3d", "force", "");
	field->offset = (char*)&(pPHSolidState->force) - (char*)pPHSolidState;
	field->size = sizeof(pPHSolidState->force);
	field = desc->AddField("", "Vec3d", "torque", "");
	field->offset = (char*)&(pPHSolidState->torque) - (char*)pPHSolidState;
	field->size = sizeof(pPHSolidState->torque);
	field = desc->AddField("", "Vec3d", "nextForce", "");
	field->offset = (char*)&(pPHSolidState->nextForce) - (char*)pPHSolidState;
	field->size = sizeof(pPHSolidState->nextForce);
	field = desc->AddField("", "Vec3d", "nextTorque", "");
	field->offset = (char*)&(pPHSolidState->nextTorque) - (char*)pPHSolidState;
	field->size = sizeof(pPHSolidState->nextTorque);
	db->RegisterDesc(desc);
	
	PHSolidDesc* pPHSolidDesc = NULL;
	desc = new FITypeDesc("PHSolidDesc");
	field = desc->AddField("", "double", "mass", "");
	field->offset = (char*)&(pPHSolidDesc->mass) - (char*)pPHSolidDesc;
	field->size = sizeof(pPHSolidDesc->mass);
	field = desc->AddField("", "Matrix3d", "inertia", "");
	field->offset = (char*)&(pPHSolidDesc->inertia) - (char*)pPHSolidDesc;
	field->size = sizeof(pPHSolidDesc->inertia);
	db->RegisterDesc(desc);
	
	Vec3f* pVec3f = NULL;
	desc = new FITypeDesc("Vec3f");
	field = desc->AddField("", "float", "x", "");
	field->offset = (char*)&(pVec3f->x) - (char*)pVec3f;
	field->size = sizeof(pVec3f->x);
	field = desc->AddField("", "float", "y", "");
	field->offset = (char*)&(pVec3f->y) - (char*)pVec3f;
	field->size = sizeof(pVec3f->y);
	field = desc->AddField("", "float", "z", "");
	field->offset = (char*)&(pVec3f->z) - (char*)pVec3f;
	field->size = sizeof(pVec3f->z);
	db->RegisterDesc(desc);
	
	Vec3d* pVec3d = NULL;
	desc = new FITypeDesc("Vec3d");
	field = desc->AddField("", "double", "x", "");
	field->offset = (char*)&(pVec3d->x) - (char*)pVec3d;
	field->size = sizeof(pVec3d->x);
	field = desc->AddField("", "double", "y", "");
	field->offset = (char*)&(pVec3d->y) - (char*)pVec3d;
	field->size = sizeof(pVec3d->y);
	field = desc->AddField("", "double", "z", "");
	field->offset = (char*)&(pVec3d->z) - (char*)pVec3d;
	field->size = sizeof(pVec3d->z);
	db->RegisterDesc(desc);
	
	Vec4f* pVec4f = NULL;
	desc = new FITypeDesc("Vec4f");
	field = desc->AddField("", "float", "x", "");
	field->offset = (char*)&(pVec4f->x) - (char*)pVec4f;
	field->size = sizeof(pVec4f->x);
	field = desc->AddField("", "float", "y", "");
	field->offset = (char*)&(pVec4f->y) - (char*)pVec4f;
	field->size = sizeof(pVec4f->y);
	field = desc->AddField("", "float", "z", "");
	field->offset = (char*)&(pVec4f->z) - (char*)pVec4f;
	field->size = sizeof(pVec4f->z);
	field = desc->AddField("", "float", "w", "");
	field->offset = (char*)&(pVec4f->w) - (char*)pVec4f;
	field->size = sizeof(pVec4f->w);
	db->RegisterDesc(desc);
	
	Vec4d* pVec4d = NULL;
	desc = new FITypeDesc("Vec4d");
	field = desc->AddField("", "double", "x", "");
	field->offset = (char*)&(pVec4d->x) - (char*)pVec4d;
	field->size = sizeof(pVec4d->x);
	field = desc->AddField("", "double", "y", "");
	field->offset = (char*)&(pVec4d->y) - (char*)pVec4d;
	field->size = sizeof(pVec4d->y);
	field = desc->AddField("", "double", "z", "");
	field->offset = (char*)&(pVec4d->z) - (char*)pVec4d;
	field->size = sizeof(pVec4d->z);
	field = desc->AddField("", "float", "w", "");
	field->offset = (char*)&(pVec4d->w) - (char*)pVec4d;
	field->size = sizeof(pVec4d->w);
	db->RegisterDesc(desc);
