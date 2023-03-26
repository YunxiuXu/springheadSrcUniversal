#define SPR_OVERRIDEMEMBERFUNCOF_CDShapePairIf(base)	\
	CDShapeIf* GetShape(int i){	return	base::GetShape(i);}	\
	Posed GetShapePose(int i){	return	base::GetShapePose(i);}	\
	Vec3d GetClosestPointOnWorld(int i){	return	base::GetClosestPointOnWorld(i);}	\
	Vec3d GetNormal(){	return	base::GetNormal();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDShapeIf(base)	\
	void SetStaticFriction(float mu0){	return	base::SetStaticFriction(mu0);}	\
	float GetStaticFriction(){	return	base::GetStaticFriction();}	\
	void SetDynamicFriction(float mu){	return	base::SetDynamicFriction(mu);}	\
	float GetDynamicFriction(){	return	base::GetDynamicFriction();}	\
	void SetElasticity(float e){	return	base::SetElasticity(e);}	\
	float GetElasticity(){	return	base::GetElasticity();}	\
	void SetDensity(float d){	return	base::SetDensity(d);}	\
	float GetDensity(){	return	base::GetDensity();}	\
	void SetContactSpring(float K){	return	base::SetContactSpring(K);}	\
	float GetContactSpring(){	return	base::GetContactSpring();}	\
	void SetContactDamper(float D){	return	base::SetContactDamper(D);}	\
	float GetContactDamper(){	return	base::GetContactDamper();}	\
	void SetReflexSpring(float K){	return	base::SetReflexSpring(K);}	\
	float GetReflexSpring(){	return	base::GetReflexSpring();}	\
	void SetReflexDamper(float D){	return	base::SetReflexDamper(D);}	\
	float GetReflexDamper(){	return	base::GetReflexDamper();}	\
	void SetFrictionSpring(float K){	return	base::SetFrictionSpring(K);}	\
	float GetFrictionSpring(){	return	base::GetFrictionSpring();}	\
	void SetFrictionDamper(float D){	return	base::SetFrictionDamper(D);}	\
	float GetFrictionDamper(){	return	base::GetFrictionDamper();}	\
	void SetVibration(float vibA, float vibB, float vibW){	return	base::SetVibration(vibA, vibB, vibW);}	\
	void SetVibA(float vibA){	return	base::SetVibA(vibA);}	\
	float GetVibA(){	return	base::GetVibA();}	\
	void SetVibB(float vibB){	return	base::SetVibB(vibB);}	\
	float GetVibB(){	return	base::GetVibB();}	\
	void SetVibW(float vibW){	return	base::SetVibW(vibW);}	\
	float GetVibW(){	return	base::GetVibW();}	\
	void SetVibT(float vibT){	return	base::SetVibT(vibT);}	\
	float GetVibT(){	return	base::GetVibT();}	\
	void SetVibContact(bool vibContact){	return	base::SetVibContact(vibContact);}	\
	bool GetVibContact(){	return	base::GetVibContact();}	\
	const Spr::PHMaterial& GetMaterial(){	return	base::GetMaterial();}	\
	void SetMaterial(const Spr::PHMaterial& mat){	return	base::SetMaterial(mat);}	\
	float CalcVolume(){	return	base::CalcVolume();}	\
	Vec3f CalcCenterOfMass(){	return	base::CalcCenterOfMass();}	\
	Matrix3f CalcMomentOfInertia(){	return	base::CalcMomentOfInertia();}	\
	bool IsInside(const Vec3f& p){	return	base::IsInside(p);}	\
	void CalcBBox(Vec3f& bbmin, Vec3f& bbmax, const Posed& pose){	return	base::CalcBBox(bbmin, bbmax, pose);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDConvexIf(base)	\
	double CurvatureRadius(Vec3d p){	return	base::CurvatureRadius(p);}	\
	Vec3d Normal(Vec3d p){	return	base::Normal(p);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDFaceIf(base)	\
	int NIndex(){	return	base::NIndex();}	\
	int* GetIndices(){	return	base::GetIndices();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDQuadFaceIf(base)	\
	int NIndex(){	return	base::NIndex();}	\
	int* GetIndices(){	return	base::GetIndices();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDConvexMeshIf(base)	\
	Spr::CDFaceIf* GetFace(int i){	return	base::GetFace(i);}	\
	int NFace(){	return	base::NFace();}	\
	Vec3f* GetVertices(){	return	base::GetVertices();}	\
	int NVertex(){	return	base::NVertex();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDConvexMeshInterpolateIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDSphereIf(base)	\
	float GetRadius(){	return	base::GetRadius();}	\
	void SetRadius(float r){	return	base::SetRadius(r);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDEllipsoidIf(base)	\
	Vec3d GetRadius(){	return	base::GetRadius();}	\
	void SetRadius(Vec3d r){	return	base::SetRadius(r);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDCapsuleIf(base)	\
	float GetRadius(){	return	base::GetRadius();}	\
	void SetRadius(float r){	return	base::SetRadius(r);}	\
	float GetLength(){	return	base::GetLength();}	\
	void SetLength(float l){	return	base::SetLength(l);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDRoundConeIf(base)	\
	Vec2f GetRadius(){	return	base::GetRadius();}	\
	float GetLength(){	return	base::GetLength();}	\
	void SetRadius(Vec2f r){	return	base::SetRadius(r);}	\
	void SetLength(float l){	return	base::SetLength(l);}	\
	void SetWidth(Vec2f r){	return	base::SetWidth(r);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDBoxIf(base)	\
	Vec3f GetBoxSize(){	return	base::GetBoxSize();}	\
	Vec3f* GetVertices(){	return	base::GetVertices();}	\
	Spr::CDFaceIf* GetFace(int i){	return	base::GetFace(i);}	\
	Vec3f SetBoxSize(Vec3f boxsize){	return	base::SetBoxSize(boxsize);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CDSpatialHashTableIf(base)	\
	void Init(float cellSize, Spr::CDBounds bounds){	return	base::Init(cellSize, bounds);}	\
	bool ReducedSelectPointsToAdd(Vec3f& pCtr, float radius, int objInd, int pInd, int timestamp){	return	base::ReducedSelectPointsToAdd(pCtr, radius, objInd, pInd, timestamp);}	\

