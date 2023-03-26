#define SPR_OVERRIDEMEMBERFUNCOF_PHEngineIf(base)	\
	int GetPriority()const{	return	base::GetPriority();}	\
	void Step(){	base::Step();}	\
	void Enable(bool on){	return	base::Enable(on);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\
	Spr::PHSceneIf* GetScene(){	return	base::GetScene();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHConstraintEngineIf(base)	\
	Spr::PHConstraintsIf* GetContactPoints(){	return	base::GetContactPoints();}	\
	void SetVelCorrectionRate(double value){	return	base::SetVelCorrectionRate(value);}	\
	double GetVelCorrectionRate(){	return	base::GetVelCorrectionRate();}	\
	void SetPosCorrectionRate(double value){	return	base::SetPosCorrectionRate(value);}	\
	double GetPosCorrectionRate(){	return	base::GetPosCorrectionRate();}	\
	void SetContactCorrectionRate(double value){	return	base::SetContactCorrectionRate(value);}	\
	double GetContactCorrectionRate(){	return	base::GetContactCorrectionRate();}	\
	void SetBSaveConstraints(bool value){	return	base::SetBSaveConstraints(value);}	\
	void SetUpdateAllSolidState(bool flag){	return	base::SetUpdateAllSolidState(flag);}	\
	void SetUseContactSurface(bool flag){	return	base::SetUseContactSurface(flag);}	\
	void SetShrinkRate(double data){	return	base::SetShrinkRate(data);}	\
	double GetShrinkRate(){	return	base::GetShrinkRate();}	\
	void SetShrinkRateCorrection(double data){	return	base::SetShrinkRateCorrection(data);}	\
	double GetShrinkRateCorrection(){	return	base::GetShrinkRateCorrection();}	\
	void SetRegularization(double reg){	return	base::SetRegularization(reg);}	\
	double GetRegularization(){	return	base::GetRegularization();}	\
	void EnableRenderContact(bool enable){	return	base::EnableRenderContact(enable);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHGravityEngineIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHPenaltyEngineIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHIKEngineIf(base)	\
	void SetMaxVelocity(double maxVel){	return	base::SetMaxVelocity(maxVel);}	\
	double GetMaxVelocity(){	return	base::GetMaxVelocity();}	\
	void SetMaxAngularVelocity(double maxAV){	return	base::SetMaxAngularVelocity(maxAV);}	\
	double GetMaxAngularVelocity(){	return	base::GetMaxAngularVelocity();}	\
	void SetMaxActuatorVelocity(double maxAV){	return	base::SetMaxActuatorVelocity(maxAV);}	\
	double GetMaxActuatorVelocity(){	return	base::GetMaxActuatorVelocity();}	\
	void SetRegularizeParam(double epsilon){	return	base::SetRegularizeParam(epsilon);}	\
	double GetRegularizeParam(){	return	base::GetRegularizeParam();}	\
	void SetIterCutOffAngVel(double epsilon){	return	base::SetIterCutOffAngVel(epsilon);}	\
	double GetIterCutOffAngVel(){	return	base::GetIterCutOffAngVel();}	\
	void SetIntpRate(){	base::SetIntpRate();}	\
	int GetIntpRate(){	return	base::GetIntpRate();}	\
	void ApplyExactState(bool reverse){	return	base::ApplyExactState(reverse);}	\
	void SetNumIter(int numIter){	return	base::SetNumIter(numIter);}	\
	int GetNumIter(){	return	base::GetNumIter();}	\
	void FK(){	base::FK();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFemEngineIf(base)	\
	void SetTimeStep(double dt){	return	base::SetTimeStep(dt);}	\
	double GetTimeStep(){	return	base::GetTimeStep();}	\
	void SetVibrationTransfer(bool bEnable){	return	base::SetVibrationTransfer(bEnable);}	\
	void SetThermalTransfer(bool bEnable){	return	base::SetThermalTransfer(bEnable);}	\
	int NMeshNew(){	return	base::NMeshNew();}	\
	Spr::PHFemMeshNewIf* GetMeshNew(int i){	return	base::GetMeshNew(i);}	\
	bool AddMeshPair(Spr::PHFemMeshNewIf* m0, Spr::PHFemMeshNewIf* m1){	return	base::AddMeshPair(m0, m1);}	\
	bool RemoveMeshPair(Spr::PHFemMeshNewIf* m0, Spr::PHFemMeshNewIf* m1){	return	base::RemoveMeshPair(m0, m1);}	\
	void ThermalTransfer(){	base::ThermalTransfer();}	\
	void setheatTransferRatio(double setheatTransferRatio){	return	base::setheatTransferRatio(setheatTransferRatio);}	\
	void FEMSolidMatchRefresh(){	base::FEMSolidMatchRefresh();}	\
	void InitContacts(){	base::InitContacts();}	\
	void ClearContactVectors(){	base::ClearContactVectors();}	\
	int NMesh(){	return	base::NMesh();}	\
	Spr::PHFemMeshIf* GetMesh(int i){	return	base::GetMesh(i);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHOpEngineIf(base)	\
	void SetTimeStep(double dt){	return	base::SetTimeStep(dt);}	\
	double GetTimeStep(){	return	base::GetTimeStep();}	\
	void SetGravity(bool gflag){	return	base::SetGravity(gflag);}	\
	void InitialHapticRenderer(int objId){	return	base::InitialHapticRenderer(objId);}	\
	PHOpObjDesc* GetOpObj(int i){	return	base::GetOpObj(i);}	\
	void StepWithBlend(){	base::StepWithBlend();}	\
	int AddOpObj(){	return	base::AddOpObj();}	\
	void SetHapticSolveEnable(bool enable){	return	base::SetHapticSolveEnable(enable);}	\
	bool IsHapticSolve(){	return	base::IsHapticSolve();}	\
	void SetProxyCorrectionEnable(bool enable){	return	base::SetProxyCorrectionEnable(enable);}	\
	bool IsProxyCorrection(){	return	base::IsProxyCorrection();}	\
	void SetUpdateNormal(bool flag){	return	base::SetUpdateNormal(flag);}	\
	bool IsUpdateNormal(int obji){	return	base::IsUpdateNormal(obji);}	\
	void SetUseHaptic(bool hapticUsage){	return	base::SetUseHaptic(hapticUsage);}	\
	bool GetUseHaptic(){	return	base::GetUseHaptic();}	\
	PHOpObjIf* GetOpObjIf(int obji){	return	base::GetOpObjIf(obji);}	\
	int GetOpObjNum(){	return	base::GetOpObjNum();}	\
	Spr::ObjectIf* GetOpAnimator(){	return	base::GetOpAnimator();}	\
	Spr::ObjectIf* GetOpHapticController(){	return	base::GetOpHapticController();}	\
	Spr::ObjectIf* GetOpHapticRenderer(){	return	base::GetOpHapticRenderer();}	\
	void SetIterationCount(int count){	return	base::SetIterationCount(count);}	\
	int GetIterationCount(){	return	base::GetIterationCount();}	\
	void SetAnimationFlag(bool flag){	return	base::SetAnimationFlag(flag);}	\
	bool GetAnimationFlag(){	return	base::GetAnimationFlag();}	\
	void SetDrawPtclR(float r){	return	base::SetDrawPtclR(r);}	\
	float GetDrawPtclR(){	return	base::GetDrawPtclR();}	\
	void InitialNoMeshHapticRenderer(){	base::InitialNoMeshHapticRenderer();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFemMeshIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFemMeshThermoIf(base)	\
	int GetSurfaceVertex(int id){	return	base::GetSurfaceVertex(id);}	\
	int NSurfaceVertices(){	return	base::NSurfaceVertices();}	\
	void SetVertexTc(int id, double temp){	return	base::SetVertexTc(id, temp);}	\
	void SetVertexTc(int id, double temp, double heatTrans){	return	base::SetVertexTc(id, temp, heatTrans);}	\
	Vec3d GetPose(int id){	return	base::GetPose(id);}	\
	Vec3d GetSufVtxPose(unsigned int id){	return	base::GetSufVtxPose(id);}	\
	unsigned long GetStepCount(){	return	base::GetStepCount();}	\
	unsigned long GetStepCountCyc(){	return	base::GetStepCountCyc();}	\
	double GetVertexTemp(unsigned int id){	return	base::GetVertexTemp(id);}	\
	double GetSufVertexTemp(unsigned int id){	return	base::GetSufVertexTemp(id);}	\
	void SetVertexTemp(unsigned int id, double temp){	return	base::SetVertexTemp(id, temp);}	\
	void SetVerticesTempAll(double temp){	return	base::SetVerticesTempAll(temp);}	\
	void AddvecFAll(unsigned int id, double dqdt){	return	base::AddvecFAll(id, dqdt);}	\
	void SetvecFAll(unsigned int id, double dqdt){	return	base::SetvecFAll(id, dqdt);}	\
	void SetRhoSpheat(double rho, double Cp){	return	base::SetRhoSpheat(rho, Cp);}	\
	unsigned int GetNFace(){	return	base::GetNFace();}	\
	std::vector< Vec3d > GetFaceEdgeVtx(unsigned int id){	return	base::GetFaceEdgeVtx(id);}	\
	Vec3d GetFaceEdgeVtx(unsigned int id, unsigned int vtx){	return	base::GetFaceEdgeVtx(id, vtx);}	\
	Vec2d GetIHbandDrawVtx(){	return	base::GetIHbandDrawVtx();}	\
	void CalcIHdqdt_atleast(double r, double R, double dqdtAll, unsigned int num){	return	base::CalcIHdqdt_atleast(r, R, dqdtAll, num);}	\
	void UpdateIHheatband(double xS, double xE, unsigned int heatingMODE){	return	base::UpdateIHheatband(xS, xE, heatingMODE);}	\
	void UpdateIHheat(unsigned int heating){	return	base::UpdateIHheat(heating);}	\
	void UpdateVecF(){	base::UpdateVecF();}	\
	void UpdateVecF_frypan(){	base::UpdateVecF_frypan();}	\
	void DecrMoist(){	base::DecrMoist();}	\
	void DecrMoist_velo(double vel){	return	base::DecrMoist_velo(vel);}	\
	void DecrMoist_vel(double dt){	return	base::DecrMoist_vel(dt);}	\
	void InitAllVertexTemp(){	base::InitAllVertexTemp();}	\
	void SetInitThermoConductionParam(double thConduct, double rho, double specificHeat, double heatTrans){	return	base::SetInitThermoConductionParam(thConduct, rho, specificHeat, heatTrans);}	\
	void SetParamAndReCreateMatrix(double thConduct0, double roh0, double specificHeat0){	return	base::SetParamAndReCreateMatrix(thConduct0, roh0, specificHeat0);}	\
	double GetArbitraryPointTemp(Vec3d temppos){	return	base::GetArbitraryPointTemp(temppos);}	\
	double GetVtxTempInTets(Vec3d temppos){	return	base::GetVtxTempInTets(temppos);}	\
	void InitVecFAlls(){	base::InitVecFAlls();}	\
	double Get_thConduct(){	return	base::Get_thConduct();}	\
	bool SetConcentricHeatMap(std::vector< double > r, std::vector< double > temp, Vec2d origin){	return	base::SetConcentricHeatMap(r, temp, origin);}	\
	void SetThermalEmissivityToVerticesAll(double thermalEmissivity, double thermalEmissivity_const){	return	base::SetThermalEmissivityToVerticesAll(thermalEmissivity, thermalEmissivity_const);}	\
	void SetOuterTemp(double temp){	return	base::SetOuterTemp(temp);}	\
	void SetThermalRadiation(double ems, double ems_const){	return	base::SetThermalRadiation(ems, ems_const);}	\
	void SetGaussCalcParam(unsigned int cyc, double epsilon){	return	base::SetGaussCalcParam(cyc, epsilon);}	\
	void InitTcAll(double temp){	return	base::InitTcAll(temp);}	\
	void InitToutAll(double temp){	return	base::InitToutAll(temp);}	\
	void SetWeekPow(double weekPow_){	return	base::SetWeekPow(weekPow_);}	\
	void SetIHParamWEEK(double inr_, double outR_, double weekPow_){	return	base::SetIHParamWEEK(inr_, outR_, weekPow_);}	\
	void SetHeatTransRatioToAllVertex(double heatTransR_){	return	base::SetHeatTransRatioToAllVertex(heatTransR_);}	\
	void AfterSetDesc(){	base::AfterSetDesc();}	\
	void SetStopTimespan(double timespan){	return	base::SetStopTimespan(timespan);}	\
	void UpdateMatk_RadiantHeatToAir(){	base::UpdateMatk_RadiantHeatToAir();}	\
	void ActivateVtxbeRadiantHeat(){	base::ActivateVtxbeRadiantHeat();}	\
	PTM::TMatrixRow< 4,4,double > GetKMatInTet(unsigned int id){	return	base::GetKMatInTet(id);}	\
	void OutputMatKall(){	base::OutputMatKall();}	\
	void IfRadiantHeatTrans(){	base::IfRadiantHeatTrans();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFemMeshNewIf(base)	\
	void SetPHSolid(Spr::PHSolidIf* s){	return	base::SetPHSolid(s);}	\
	Spr::PHSolidIf* GetPHSolid(){	return	base::GetPHSolid();}	\
	Spr::PHFemVibrationIf* GetPHFemVibration(){	return	base::GetPHFemVibration();}	\
	Spr::PHFemThermoIf* GetPHFemThermo(){	return	base::GetPHFemThermo();}	\
	Spr::PHFemPorousWOMoveIf* GetPHFemPorousWOMove(){	return	base::GetPHFemPorousWOMove();}	\
	int NVertices(){	return	base::NVertices();}	\
	int NFaces(){	return	base::NFaces();}	\
	int NTets(){	return	base::NTets();}	\
	void SetVertexUpdateFlags(bool flg){	return	base::SetVertexUpdateFlags(flg);}	\
	void SetVertexUpateFlag(int vid, bool flg){	return	base::SetVertexUpateFlag(vid, flg);}	\
	double CompTetVolume(int tetID, bool bDeform){	return	base::CompTetVolume(tetID, bDeform);}	\
	bool AddVertexDisplacementW(int vtxId, Vec3d disW){	return	base::AddVertexDisplacementW(vtxId, disW);}	\
	bool AddVertexDisplacementL(int vtxId, Vec3d disL){	return	base::AddVertexDisplacementL(vtxId, disL);}	\
	bool SetVertexPositionW(int vtxId, Vec3d posW){	return	base::SetVertexPositionW(vtxId, posW);}	\
	bool SetVertexPositionL(int vtxId, Vec3d posL){	return	base::SetVertexPositionL(vtxId, posL);}	\
	bool SetVertexVelocityL(int vtxId, Vec3d posL){	return	base::SetVertexVelocityL(vtxId, posL);}	\
	Vec3d GetVertexVelocityL(int vtxId){	return	base::GetVertexVelocityL(vtxId);}	\
	Vec3d GetVertexPositionL(int vtxId){	return	base::GetVertexPositionL(vtxId);}	\
	Vec3d GetVertexDisplacementL(int vtxId){	return	base::GetVertexDisplacementL(vtxId);}	\
	Vec3d GetVertexInitalPositionL(int vtxId){	return	base::GetVertexInitalPositionL(vtxId);}	\
	void SetVelocity(Vec3d v){	return	base::SetVelocity(v);}	\
	int* GetTetVertexIds(int t){	return	base::GetTetVertexIds(t);}	\
	int* GetFaceVertexIds(int f){	return	base::GetFaceVertexIds(f);}	\
	Vec3d GetFaceNormal(int f){	return	base::GetFaceNormal(f);}	\
	int GetSurfaceVertex(int i){	return	base::GetSurfaceVertex(i);}	\
	int NSurfaceVertices(){	return	base::NSurfaceVertices();}	\
	int NSurfaceFace(){	return	base::NSurfaceFace();}	\
	bool CompTetShapeFunctionValue(const int& tetId, const Vec3d& posL, Vec4d& value, const bool& bDeform){	return	base::CompTetShapeFunctionValue(tetId, posL, value, bDeform);}	\
	int FindTetFromFace(int faceId){	return	base::FindTetFromFace(faceId);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFemBaseIf(base)	\
	Spr::PHFemMeshNewIf* GetPHFemMesh(){	return	base::GetPHFemMesh();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFemVibrationIf(base)	\
	void SetTimeStep(double dt){	return	base::SetTimeStep(dt);}	\
	double GetTimeStep(){	return	base::GetTimeStep();}	\
	void SetYoungModulus(double value){	return	base::SetYoungModulus(value);}	\
	double GetYoungModulus(){	return	base::GetYoungModulus();}	\
	void SetPoissonsRatio(double value){	return	base::SetPoissonsRatio(value);}	\
	double GetPoissonsRatio(){	return	base::GetPoissonsRatio();}	\
	void SetDensity(double value){	return	base::SetDensity(value);}	\
	double GetDensity(){	return	base::GetDensity();}	\
	void SetAlpha(double value){	return	base::SetAlpha(value);}	\
	double GetAlpha(){	return	base::GetAlpha();}	\
	void SetBeta(double value){	return	base::SetBeta(value);}	\
	double GetBeta(){	return	base::GetBeta();}	\
	void SetBoundary(int vtxIds){	return	base::SetBoundary(vtxIds);}	\
	void ClearBoundary(){	base::ClearBoundary();}	\
	std::vector< int > GetBoundary(){	return	base::GetBoundary();}	\
	void SetAnalysisMode(Spr::PHFemVibrationDesc::ANALYSIS_MODE mode){	return	base::SetAnalysisMode(mode);}	\
	void SetIntegrationMode(Spr::PHFemVibrationDesc::INTEGRATION_MODE mode){	return	base::SetIntegrationMode(mode);}	\
	bool AddBoundaryCondition(int vtxId, Vec3i dof){	return	base::AddBoundaryCondition(vtxId, dof);}	\
	void DeleteBoundaryCondition(){	base::DeleteBoundaryCondition();}	\
	bool FindNeighborTetrahedron(Vec3d posW, int& tetId, Vec3d& cpW, bool bDeform){	return	base::FindNeighborTetrahedron(posW, tetId, cpW, bDeform);}	\
	bool SetDamping(int tetId, Vec3d posW, double damp_ratio){	return	base::SetDamping(tetId, posW, damp_ratio);}	\
	bool AddForce(int tetId, Vec3d posW, Vec3d fW){	return	base::AddForce(tetId, posW, fW);}	\
	bool GetDisplacement(int tetId, Vec3d posW, Vec3d& disp, bool bDeform){	return	base::GetDisplacement(tetId, posW, disp, bDeform);}	\
	bool GetVelocity(int tetId, Vec3d posW, Vec3d& vel, bool bDeform){	return	base::GetVelocity(tetId, posW, vel, bDeform);}	\
	bool GetPosition(int tetId, Vec3d posW, Vec3d& pos, bool bDeform){	return	base::GetPosition(tetId, posW, pos, bDeform);}	\
	void SetbRecomp(){	base::SetbRecomp();}	\
	void Init(){	base::Init();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFemThermoIf(base)	\
	int GetSurfaceVertex(int id){	return	base::GetSurfaceVertex(id);}	\
	int NSurfaceVertices(){	return	base::NSurfaceVertices();}	\
	void SetVertexTc(int id, double temp){	return	base::SetVertexTc(id, temp);}	\
	void SetVertexTc(int id, double temp, double heatTrans){	return	base::SetVertexTc(id, temp, heatTrans);}	\
	Vec3d GetPose(int id){	return	base::GetPose(id);}	\
	Vec3d GetSufVtxPose(unsigned int id){	return	base::GetSufVtxPose(id);}	\
	unsigned long GetStepCount(){	return	base::GetStepCount();}	\
	unsigned long GetStepCountCyc(){	return	base::GetStepCountCyc();}	\
	double GetVertexTemp(unsigned int id){	return	base::GetVertexTemp(id);}	\
	double GetSufVertexTemp(unsigned int id){	return	base::GetSufVertexTemp(id);}	\
	void SetVertexTemp(unsigned int id, double temp){	return	base::SetVertexTemp(id, temp);}	\
	void SetVerticesTempAll(double temp){	return	base::SetVerticesTempAll(temp);}	\
	void AddvecFAll(unsigned int id, double dqdt){	return	base::AddvecFAll(id, dqdt);}	\
	void SetvecFAll(unsigned int id, double dqdt){	return	base::SetvecFAll(id, dqdt);}	\
	void SetRhoSpheat(double rho, double Cp){	return	base::SetRhoSpheat(rho, Cp);}	\
	Vec2d GetIHbandDrawVtx(){	return	base::GetIHbandDrawVtx();}	\
	void CalcIHdqdt_atleast(double r, double R, double dqdtAll, unsigned int num){	return	base::CalcIHdqdt_atleast(r, R, dqdtAll, num);}	\
	void UpdateIHheatband(double xS, double xE, unsigned int heatingMODE){	return	base::UpdateIHheatband(xS, xE, heatingMODE);}	\
	void UpdateIHheat(unsigned int heating){	return	base::UpdateIHheat(heating);}	\
	void UpdateVecF(){	base::UpdateVecF();}	\
	void UpdateVecF_frypan(){	base::UpdateVecF_frypan();}	\
	void DecrMoist(){	base::DecrMoist();}	\
	void DecrMoist_velo(double vel){	return	base::DecrMoist_velo(vel);}	\
	void DecrMoist_vel(double dt){	return	base::DecrMoist_vel(dt);}	\
	void InitAllVertexTemp(){	base::InitAllVertexTemp();}	\
	void SetInitThermoConductionParam(double thConduct, double rho, double specificHeat, double heatTrans){	return	base::SetInitThermoConductionParam(thConduct, rho, specificHeat, heatTrans);}	\
	void SetParamAndReCreateMatrix(double thConduct0, double roh0, double specificHeat0){	return	base::SetParamAndReCreateMatrix(thConduct0, roh0, specificHeat0);}	\
	double GetArbitraryPointTemp(Vec3d temppos){	return	base::GetArbitraryPointTemp(temppos);}	\
	double GetVtxTempInTets(Vec3d temppos){	return	base::GetVtxTempInTets(temppos);}	\
	void InitVecFAlls(){	base::InitVecFAlls();}	\
	double Get_thConduct(){	return	base::Get_thConduct();}	\
	bool SetConcentricHeatMap(std::vector< double > r, std::vector< double > temp, Vec2d origin){	return	base::SetConcentricHeatMap(r, temp, origin);}	\
	void SetThermalEmissivityToVerticesAll(double thermalEmissivity, double thermalEmissivity_const){	return	base::SetThermalEmissivityToVerticesAll(thermalEmissivity, thermalEmissivity_const);}	\
	void SetOuterTemp(double temp){	return	base::SetOuterTemp(temp);}	\
	void SetThermalRadiation(double ems, double ems_const){	return	base::SetThermalRadiation(ems, ems_const);}	\
	void SetGaussCalcParam(unsigned int cyc, double epsilon){	return	base::SetGaussCalcParam(cyc, epsilon);}	\
	void InitTcAll(double temp){	return	base::InitTcAll(temp);}	\
	void InitToutAll(double temp){	return	base::InitToutAll(temp);}	\
	void SetWeekPow(double weekPow_){	return	base::SetWeekPow(weekPow_);}	\
	void SetIHParamWEEK(double inr_, double outR_, double weekPow_){	return	base::SetIHParamWEEK(inr_, outR_, weekPow_);}	\
	void SetHeatTransRatioToAllVertex(double heatTransR_){	return	base::SetHeatTransRatioToAllVertex(heatTransR_);}	\
	void AfterSetDesc(){	base::AfterSetDesc();}	\
	void SetStopTimespan(double timespan){	return	base::SetStopTimespan(timespan);}	\
	void UpdateMatk_RadiantHeatToAir(){	base::UpdateMatk_RadiantHeatToAir();}	\
	void ReCreateMatrix(double thConduct0){	return	base::ReCreateMatrix(thConduct0);}	\
	void ActivateVtxbeRadiantHeat(){	base::ActivateVtxbeRadiantHeat();}	\
	PTM::TMatrixRow< 4,4,double > GetKMatInTet(unsigned int id){	return	base::GetKMatInTet(id);}	\
	void OutputMatKall(){	base::OutputMatKall();}	\
	void IfRadiantHeatTrans(){	base::IfRadiantHeatTrans();}	\
	void IfRadiantHeatTransSteak(){	base::IfRadiantHeatTransSteak();}	\
	float calcGvtx(std::string fwfood, int pv, unsigned int texture_mode){	return	base::calcGvtx(fwfood, pv, texture_mode);}	\
	void SetTimeStep(double dt){	return	base::SetTimeStep(dt);}	\
	Vec3d GetVertexNormal(unsigned int vtxid){	return	base::GetVertexNormal(vtxid);}	\
	void SetVertexHeatTransRatio(unsigned int vtxid, double heattransRatio){	return	base::SetVertexHeatTransRatio(vtxid, heattransRatio);}	\
	void SetVertexBeRadiantHeat(unsigned int vtxid, bool flag){	return	base::SetVertexBeRadiantHeat(vtxid, flag);}	\
	double GetVertexArea(unsigned int vtxid){	return	base::GetVertexArea(vtxid);}	\
	void SetVertexToofar(unsigned int vtxid, bool tooFar){	return	base::SetVertexToofar(vtxid, tooFar);}	\
	bool GetVertexToofar(unsigned int vtxid){	return	base::GetVertexToofar(vtxid);}	\
	void SetVertexBeCondVtxs(unsigned int vtxid, bool becondVtxs){	return	base::SetVertexBeCondVtxs(vtxid, becondVtxs);}	\
	void CreateVecFAll(){	base::CreateVecFAll();}	\
	void CalcFaceNormalAll(){	base::CalcFaceNormalAll();}	\
	void CalcVertexNormalAll(){	base::CalcVertexNormalAll();}	\
	void InitFaceNormalAll(){	base::InitFaceNormalAll();}	\
	void InitVertexNormalAll(){	base::InitVertexNormalAll();}	\
	void RevVertexNormalAll(){	base::RevVertexNormalAll();}	\
	void SetWeekPowFULL(double weekPow_full){	return	base::SetWeekPowFULL(weekPow_full);}	\
	void SetweekPow_FULL(double setweekPow_FULL){	return	base::SetweekPow_FULL(setweekPow_FULL);}	\
	void setIhRatio(double a){	return	base::setIhRatio(a);}	\
	void Setems(double setems){	return	base::Setems(setems);}	\
	void Setems_steak(double setems_steak){	return	base::Setems_steak(setems_steak);}	\
	void SetthConduct(double thConduct){	return	base::SetthConduct(thConduct);}	\
	double GetWeekPowFULL(){	return	base::GetWeekPowFULL();}	\
	Vec3d GetVertexPose(unsigned int vtxid){	return	base::GetVertexPose(vtxid);}	\
	void OutTetVolumeAll(){	base::OutTetVolumeAll();}	\
	int GetTetsV(unsigned int tetid, unsigned int vtxid){	return	base::GetTetsV(tetid, vtxid);}	\
	void VecFNegativeCheck(){	base::VecFNegativeCheck();}	\
	double GetVecFElem(unsigned int vtxid){	return	base::GetVecFElem(vtxid);}	\
	int GetTetVNums(unsigned int id, unsigned int num){	return	base::GetTetVNums(id, num);}	\
	double GetInitialTemp(){	return	base::GetInitialTemp();}	\
	void UpdateVertexTempAll(){	base::UpdateVertexTempAll();}	\
	void SetThermoCameraScale(double minTemp, double maxTemp){	return	base::SetThermoCameraScale(minTemp, maxTemp);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFemPorousWOMoveIf(base)	\
	void SetTimeStep(double dt){	return	base::SetTimeStep(dt);}	\
	double GetTimeStep(){	return	base::GetTimeStep();}	\
	void UpdateVertexRhoWAll(){	base::UpdateVertexRhoWAll();}	\
	void UpdateVertexRhoOAll(){	base::UpdateVertexRhoOAll();}	\
	void SetVertexMw(unsigned int vtxid, double mw){	return	base::SetVertexMw(vtxid, mw);}	\
	void SetVertexMo(unsigned int vtxid, double mo){	return	base::SetVertexMo(vtxid, mo);}	\
	double GetVertexMw(unsigned int vtxid){	return	base::GetVertexMw(vtxid);}	\
	double GetVertexMo(unsigned int vtxid){	return	base::GetVertexMo(vtxid);}	\
	double GetVtxWaterInTets(Vec3d temppos){	return	base::GetVtxWaterInTets(temppos);}	\
	double GetVtxOilInTets(Vec3d temppos){	return	base::GetVtxOilInTets(temppos);}	\
	double GetVertexRhoW(unsigned int vtxid){	return	base::GetVertexRhoW(vtxid);}	\
	double GetVertexRhoO(unsigned int vtxid){	return	base::GetVertexRhoO(vtxid);}	\
	float calcGvtx(std::string fwfood, int pv, unsigned int texture_mode){	return	base::calcGvtx(fwfood, pv, texture_mode);}	\
	void setGravity(Vec3d g){	return	base::setGravity(g);}	\
	double decideWetValue(unsigned int faceid){	return	base::decideWetValue(faceid);}	\
	double GetVtxSaturation(unsigned int vtxid){	return	base::GetVtxSaturation(vtxid);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHHapticPointerIf(base)	\
	void SetHapticRenderMode(Spr::PHHapticPointerDesc::HapticRenderMode m){	return	base::SetHapticRenderMode(m);}	\
	Spr::PHHapticPointerDesc::HapticRenderMode GetHapticRenderMode(){	return	base::GetHapticRenderMode();}	\
	void EnableRotation(bool b){	return	base::EnableRotation(b);}	\
	bool IsRotation(){	return	base::IsRotation();}	\
	void EnableForce(bool b){	return	base::EnableForce(b);}	\
	bool IsForce(){	return	base::IsForce();}	\
	void EnableFriction(bool b){	return	base::EnableFriction(b);}	\
	bool IsFriction(){	return	base::IsFriction();}	\
	void EnableTimeVaryFriction(bool b){	return	base::EnableTimeVaryFriction(b);}	\
	bool IsTimeVaryFriction(){	return	base::IsTimeVaryFriction();}	\
	void EnableVibration(bool b){	return	base::EnableVibration(b);}	\
	bool IsVibration(){	return	base::IsVibration();}	\
	void EnableMultiPoints(bool b){	return	base::EnableMultiPoints(b);}	\
	bool IsMultiPoints(){	return	base::IsMultiPoints();}	\
	void EnableMultiProxy(bool b){	return	base::EnableMultiProxy(b);}	\
	bool IsMultiProxy(){	return	base::IsMultiProxy();}	\
	void EnableSimulation(bool b){	return	base::EnableSimulation(b);}	\
	bool IsSimulation(){	return	base::IsSimulation();}	\
	void SetFrictionSpring(float s){	return	base::SetFrictionSpring(s);}	\
	float GetFrictionSpring(){	return	base::GetFrictionSpring();}	\
	void SetFrictionDamper(float s){	return	base::SetFrictionDamper(s);}	\
	float GetFrictionDamper(){	return	base::GetFrictionDamper();}	\
	void SetReflexSpring(float s){	return	base::SetReflexSpring(s);}	\
	float GetReflexSpring(){	return	base::GetReflexSpring();}	\
	void SetReflexDamper(float d){	return	base::SetReflexDamper(d);}	\
	float GetReflexDamper(){	return	base::GetReflexDamper();}	\
	void SetRotationReflexSpring(float s){	return	base::SetRotationReflexSpring(s);}	\
	float GetRotationReflexSpring(){	return	base::GetRotationReflexSpring();}	\
	void SetRotationReflexDamper(float d){	return	base::SetRotationReflexDamper(d);}	\
	float GetRotationReflexDamper(){	return	base::GetRotationReflexDamper();}	\
	void SetLocalRange(float r){	return	base::SetLocalRange(r);}	\
	float GetLocalRange(){	return	base::GetLocalRange();}	\
	void SetPosScale(double scale){	return	base::SetPosScale(scale);}	\
	double GetPosScale(){	return	base::GetPosScale();}	\
	void SetRotationalWeight(double w){	return	base::SetRotationalWeight(w);}	\
	double GetRotationalWeight(){	return	base::GetRotationalWeight();}	\
	void SetDefaultPose(Posed p){	return	base::SetDefaultPose(p);}	\
	Posed GetDefaultPose(){	return	base::GetDefaultPose();}	\
	int NNeighborSolids(){	return	base::NNeighborSolids();}	\
	int GetNeighborSolidId(int i){	return	base::GetNeighborSolidId(i);}	\
	Spr::PHSolidIf* GetNeighborSolid(int i){	return	base::GetNeighborSolid(i);}	\
	float GetContactForce(int i){	return	base::GetContactForce(i);}	\
	SpatialVector GetHapticForce(){	return	base::GetHapticForce();}	\
	SpatialVector GetProxyVelocity(){	return	base::GetProxyVelocity();}	\
	void SetProxyN(int n){	return	base::SetProxyN(n);}	\
	int GetProxyN(){	return	base::GetProxyN();}	\
	int GetTotalSlipState(){	return	base::GetTotalSlipState();}	\
	int GetSlipState(int i){	return	base::GetSlipState(i);}	\
	void SetProxyVelocity(SpatialVector spv){	return	base::SetProxyVelocity(spv);}	\
	void AddHapticForce(const SpatialVector& f){	return	base::AddHapticForce(f);}	\
	void ClearHapticForce(){	base::ClearHapticForce();}	\
	void UpdateHumanInterface(const Posed& pose, const SpatialVector& vel){	return	base::UpdateHumanInterface(pose, vel);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHShapePairForHapticIf(base)	\
	int NIrs(){	return	base::NIrs();}	\
	int NIrsNormal(){	return	base::NIrsNormal();}	\
	Vec3d GetIrForce(int i){	return	base::GetIrForce(i);}	\
	double GetMu(){	return	base::GetMu();}	\
	PHFrameIf* GetFrame(int i){	return	base::GetFrame(i);}	\
	void UpdateCache(){	base::UpdateCache();}	\
	double GetMus(int id){	return	base::GetMus(id);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSolidPairForHapticIf(base)	\
	Spr::PHShapePairForHapticIf* GetShapePair(int i, int j){	return	base::GetShapePair(i, j);}	\
	Spr::PHSolidPairForHapticIf::FrictionState GetFrictionState(){	return	base::GetFrictionState();}	\
	unsigned int GetContactCount(){	return	base::GetContactCount();}	\
	unsigned int GetFrictionCount(){	return	base::GetFrictionCount();}	\
	void InitFrictionState(int n){	return	base::InitFrictionState(n);}	\
	void InitFrictionCount(int n){	return	base::InitFrictionCount(n);}	\
	void InitContactCount(int n){	return	base::InitContactCount(n);}	\
	void InitSlipState(int n){	return	base::InitSlipState(n);}	\
	int GetSlipState(int i){	return	base::GetSlipState(i);}	\
	Vec3d GetForce(){	return	base::GetForce();}	\
	Vec3d GetTorque(){	return	base::GetTorque();}	\
	Spr::PHSolidPairForHapticIf::FrictionState GetFrictionStates(int i){	return	base::GetFrictionStates(i);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHHapticEngineIf(base)	\
	void SetHapticStepMode(Spr::PHHapticEngineDesc::HapticStepMode mode){	return	base::SetHapticStepMode(mode);}	\
	Spr::PHHapticEngineDesc::HapticStepMode GetHapticStepMode(){	return	base::GetHapticStepMode();}	\
	int NSolids(){	return	base::NSolids();}	\
	int NPointers(){	return	base::NPointers();}	\
	Spr::PHHapticPointerIf* GetPointer(int i){	return	base::GetPointer(i);}	\
	Spr::PHSolidPairForHapticIf* GetSolidPair(int i, int j){	return	base::GetSolidPair(i, j);}	\
	int NSolidsInHaptic(){	return	base::NSolidsInHaptic();}	\
	int NPointersInHaptic(){	return	base::NPointersInHaptic();}	\
	Spr::PHHapticPointerIf* GetPointerInHaptic(int i){	return	base::GetPointerInHaptic(i);}	\
	Spr::PHSolidPairForHapticIf* GetSolidPairInHaptic(int i, int j){	return	base::GetSolidPairInHaptic(i, j);}	\
	void StepPhysicsSimulation(){	base::StepPhysicsSimulation();}	\
	void ReleaseState(){	base::ReleaseState();}	\
	bool SetCallbackBeforeStep(Spr::PHHapticEngineIf::Callback f, void* arg){	return	base::SetCallbackBeforeStep(f, arg);}	\
	bool SetCallbackAfterStep(Spr::PHHapticEngineIf::Callback f, void* arg){	return	base::SetCallbackAfterStep(f, arg);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHIKEndEffectorIf(base)	\
	void SetSolid(Spr::PHSolidIf* solid){	return	base::SetSolid(solid);}	\
	Spr::PHSolidIf* GetSolid(){	return	base::GetSolid();}	\
	void SetParentActuator(Spr::PHIKActuatorIf* ika){	return	base::SetParentActuator(ika);}	\
	Spr::PHIKActuatorIf* GetParentActuator(){	return	base::GetParentActuator();}	\
	void Enable(bool enable){	return	base::Enable(enable);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\
	void SetTargetLocalPosition(Vec3d localPosition){	return	base::SetTargetLocalPosition(localPosition);}	\
	Vec3d GetTargetLocalPosition(){	return	base::GetTargetLocalPosition();}	\
	void SetTargetLocalDirection(Vec3d localDirection){	return	base::SetTargetLocalDirection(localDirection);}	\
	Vec3d GetTargetLocalDirection(){	return	base::GetTargetLocalDirection();}	\
	void EnablePositionControl(bool enable){	return	base::EnablePositionControl(enable);}	\
	bool IsPositionControlEnabled(){	return	base::IsPositionControlEnabled();}	\
	void SetPositionPriority(double priority){	return	base::SetPositionPriority(priority);}	\
	double GetPositionPriority(){	return	base::GetPositionPriority();}	\
	void SetTargetPosition(Vec3d position){	return	base::SetTargetPosition(position);}	\
	Vec3d GetTargetPosition(){	return	base::GetTargetPosition();}	\
	void EnableOrientationControl(bool enable){	return	base::EnableOrientationControl(enable);}	\
	bool IsOrientationControlEnabled(){	return	base::IsOrientationControlEnabled();}	\
	void SetOrientationPriority(double priority){	return	base::SetOrientationPriority(priority);}	\
	double GetOrientationPriority(){	return	base::GetOrientationPriority();}	\
	void SetOriCtlMode(Spr::PHIKEndEffectorDesc::OriCtlMode mode){	return	base::SetOriCtlMode(mode);}	\
	Spr::PHIKEndEffectorDesc::OriCtlMode GetOriCtlMode(){	return	base::GetOriCtlMode();}	\
	void SetTargetOrientation(Quaterniond orientation){	return	base::SetTargetOrientation(orientation);}	\
	Quaterniond GetTargetOrientation(){	return	base::GetTargetOrientation();}	\
	void SetTargetDirection(Vec3d direction){	return	base::SetTargetDirection(direction);}	\
	Vec3d GetTargetDirection(){	return	base::GetTargetDirection();}	\
	void SetTargetLookat(Vec3d lookat){	return	base::SetTargetLookat(lookat);}	\
	Vec3d GetTargetLookat(){	return	base::GetTargetLookat();}	\
	void SetTargetVelocity(Vec3d velocity){	return	base::SetTargetVelocity(velocity);}	\
	Vec3d GetTargetVelocity(){	return	base::GetTargetVelocity();}	\
	void SetTargetAngularVelocity(Vec3d angVel){	return	base::SetTargetAngularVelocity(angVel);}	\
	Vec3d GetTargetAngularVelocity(){	return	base::GetTargetAngularVelocity();}	\
	void EnableForceControl(bool enable){	return	base::EnableForceControl(enable);}	\
	void SetTargetForce(Vec3d force, Vec3d workingPoint){	return	base::SetTargetForce(force, workingPoint);}	\
	Vec3d GetTargetForce(){	return	base::GetTargetForce();}	\
	Vec3d GetTargetForceWorkingPoint(){	return	base::GetTargetForceWorkingPoint();}	\
	void EnableTorqueControl(bool enable){	return	base::EnableTorqueControl(enable);}	\
	void SetTargetTorque(Vec3d torque){	return	base::SetTargetTorque(torque);}	\
	Vec3d GetTargetTorque(){	return	base::GetTargetTorque();}	\
	Posed GetSolidTempPose(){	return	base::GetSolidTempPose();}	\
	void ApplyExactState(){	base::ApplyExactState();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHIKActuatorIf(base)	\
	void PrepareSolve(){	base::PrepareSolve();}	\
	void ProceedSolve(){	base::ProceedSolve();}	\
	PTM::VVector< double > GetRawSolution(){	return	base::GetRawSolution();}	\
	void Move(){	base::Move();}	\
	void ApplyExactState(bool reverse){	return	base::ApplyExactState(reverse);}	\
	void SetBias(float bias){	return	base::SetBias(bias);}	\
	float GetBias(){	return	base::GetBias();}	\
	void SetPullbackRate(double pullbackRate){	return	base::SetPullbackRate(pullbackRate);}	\
	double GetPullbackRate(){	return	base::GetPullbackRate();}	\
	void Enable(bool enable){	return	base::Enable(enable);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\
	int NAncestors(){	return	base::NAncestors();}	\
	Spr::PHIKActuatorIf* GetAncestor(int i){	return	base::GetAncestor(i);}	\
	Spr::PHIKActuatorIf* GetParent(){	return	base::GetParent();}	\
	int NChildActuators(){	return	base::NChildActuators();}	\
	Spr::PHIKActuatorIf* GetChildActuator(int i){	return	base::GetChildActuator(i);}	\
	Spr::PHIKEndEffectorIf* GetChildEndEffector(){	return	base::GetChildEndEffector();}	\
	Posed GetSolidTempPose(){	return	base::GetSolidTempPose();}	\
	Posed GetSolidPullbackPose(){	return	base::GetSolidPullbackPose();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHIKBallActuatorIf(base)	\
	void SetJoint(Spr::PHBallJointIf* joint){	return	base::SetJoint(joint);}	\
	Spr::PHBallJointIf* GetJoint(){	return	base::GetJoint();}	\
	void SetJointTempOri(Quaterniond ori){	return	base::SetJointTempOri(ori);}	\
	void SetPullbackTarget(Quaterniond ori){	return	base::SetPullbackTarget(ori);}	\
	Quaterniond GetJointTempOri(){	return	base::GetJointTempOri();}	\
	Quaterniond GetPullbackTarget(){	return	base::GetPullbackTarget();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHIKHingeActuatorIf(base)	\
	void SetJoint(Spr::PHHingeJointIf* joint){	return	base::SetJoint(joint);}	\
	Spr::PHHingeJointIf* GetJoint(){	return	base::GetJoint();}	\
	void SetJointTempAngle(double angle){	return	base::SetJointTempAngle(angle);}	\
	void SetPullbackTarget(double angle){	return	base::SetPullbackTarget(angle);}	\
	double GetJointTempAngle(){	return	base::GetJointTempAngle();}	\
	double GetPullbackTarget(){	return	base::GetPullbackTarget();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHIKSpringActuatorIf(base)	\
	void SetJoint(Spr::PHSpringIf* joint){	return	base::SetJoint(joint);}	\
	Spr::PHSpringIf* GetJoint(){	return	base::GetJoint();}	\
	void SetJointTempPose(Posed pose){	return	base::SetJointTempPose(pose);}	\
	void SetPullbackTarget(Posed pose){	return	base::SetPullbackTarget(pose);}	\
	Posed GetJointTempPose(){	return	base::GetJointTempPose();}	\
	Posed GetPullbackTarget(){	return	base::GetPullbackTarget();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHConstraintIf(base)	\
	Spr::PHSolidIf* GetSocketSolid(){	return	base::GetSocketSolid();}	\
	Spr::PHSolidIf* GetPlugSolid(){	return	base::GetPlugSolid();}	\
	Spr::PHSceneIf* GetScene()const{	return	base::GetScene();}	\
	void Enable(bool bEnable){	return	base::Enable(bEnable);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\
	bool IsArticulated(){	return	base::IsArticulated();}	\
	void GetSocketPose(Posed& pose){	return	base::GetSocketPose(pose);}	\
	void SetSocketPose(const Posed& pose){	return	base::SetSocketPose(pose);}	\
	void GetPlugPose(Posed& pose){	return	base::GetPlugPose(pose);}	\
	void SetPlugPose(const Posed& pose){	return	base::SetPlugPose(pose);}	\
	void GetRelativePose(Posed& p){	return	base::GetRelativePose(p);}	\
	Vec3d GetRelativePoseR(){	return	base::GetRelativePoseR();}	\
	Quaterniond GetRelativePoseQ(){	return	base::GetRelativePoseQ();}	\
	Quaternionf GetAbsolutePoseQ(){	return	base::GetAbsolutePoseQ();}	\
	void GetRelativeVelocity(Vec3d& v, Vec3d& w){	return	base::GetRelativeVelocity(v, w);}	\
	void GetConstraintForce(Vec3d& f, Vec3d& t){	return	base::GetConstraintForce(f, t);}	\
	bool IsYielded(){	return	base::IsYielded();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHConstraintsIf(base)	\
	Spr::PHConstraintIf* FindBySolidPair(Spr::PHSolidIf* lhs, Spr::PHSolidIf* rhs){	return	base::FindBySolidPair(lhs, rhs);}	\
	Vec3d GetTotalForce(Spr::PHSolidIf* lhs, Spr::PHSolidIf* rhs){	return	base::GetTotalForce(lhs, rhs);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHContactPointIf(base)	\
	Posed GetPose(){	return	base::GetPose();}	\
	bool IsStaticFriction(){	return	base::IsStaticFriction();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHJointIf(base)	\
	void SetMaxForce(double max){	return	base::SetMaxForce(max);}	\
	double GetMaxForce(){	return	base::GetMaxForce();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PH1DJointIf(base)	\
	PH1DJointLimitIf* CreateLimit(const PH1DJointLimitDesc& desc){	return	base::CreateLimit(desc);}	\
	PH1DJointMotorIf* CreateMotor(const IfInfo* ii, const PH1DJointMotorDesc& desc){	return	base::CreateMotor(ii, desc);}	\
	bool AddMotor(PH1DJointMotorIf* m){	return	base::AddMotor(m);}	\
	bool RemoveMotor(int n){	return	base::RemoveMotor(n);}	\
	bool IsCyclic(){	return	base::IsCyclic();}	\
	void SetCyclic(bool on){	return	base::SetCyclic(on);}	\
	double GetPosition(){	return	base::GetPosition();}	\
	double GetVelocity(){	return	base::GetVelocity();}	\
	bool HasLimit(){	return	base::HasLimit();}	\
	PH1DJointLimitIf* GetLimit(){	return	base::GetLimit();}	\
	void SetSpring(double spring){	return	base::SetSpring(spring);}	\
	double GetSpring(){	return	base::GetSpring();}	\
	void SetDamper(double damper){	return	base::SetDamper(damper);}	\
	double GetDamper(){	return	base::GetDamper();}	\
	double GetSecondDamper(){	return	base::GetSecondDamper();}	\
	void SetSecondDamper(double input){	return	base::SetSecondDamper(input);}	\
	void SetTargetPosition(double targetPosition){	return	base::SetTargetPosition(targetPosition);}	\
	double GetTargetPosition(){	return	base::GetTargetPosition();}	\
	void SetTargetVelocity(double v){	return	base::SetTargetVelocity(v);}	\
	double GetTargetVelocity(){	return	base::GetTargetVelocity();}	\
	void SetOffsetForce(double dat){	return	base::SetOffsetForce(dat);}	\
	double GetOffsetForce(){	return	base::GetOffsetForce();}	\
	void SetOffsetForceN(int n, double dat){	return	base::SetOffsetForceN(n, dat);}	\
	double GetOffsetForceN(int n){	return	base::GetOffsetForceN(n);}	\
	double GetYieldStress(){	return	base::GetYieldStress();}	\
	void SetYieldStress(const double yS){	return	base::SetYieldStress(yS);}	\
	double GetHardnessRate(){	return	base::GetHardnessRate();}	\
	void SetHardnessRate(const double hR){	return	base::SetHardnessRate(hR);}	\
	void SetSecondMoment(const double& sM){	return	base::SetSecondMoment(sM);}	\
	double GetSecondMoment(){	return	base::GetSecondMoment();}	\
	int NMotors(){	return	base::NMotors();}	\
	PH1DJointMotorIf** GetMotors(){	return	base::GetMotors();}	\
	double GetMotorForce(){	return	base::GetMotorForce();}	\
	double GetMotorForceN(int n){	return	base::GetMotorForceN(n);}	\
	double GetLimitForce(){	return	base::GetLimitForce();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHHingeJointIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSliderJointIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHPathIf(base)	\
	void AddPoint(double s, const Posed& pose){	return	base::AddPoint(s, pose);}	\
	void SetLoop(bool bOnOff){	return	base::SetLoop(bOnOff);}	\
	bool IsLoop(){	return	base::IsLoop();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHPathJointIf(base)	\
	void SetPosition(double q){	return	base::SetPosition(q);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHGenericJointIf(base)	\
	void SetCallback(Spr::PHGenericJointCallback* cb){	return	base::SetCallback(cb);}	\
	void SetParam(const std::string& name, double value){	return	base::SetParam(name, value);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBallJointIf(base)	\
	PHBallJointLimitIf* CreateLimit(const IfInfo* ii, const PHBallJointLimitDesc& desc){	return	base::CreateLimit(ii, desc);}	\
	Spr::PHBallJointMotorIf* CreateMotor(const IfInfo* ii, const PHBallJointMotorDesc& desc){	return	base::CreateMotor(ii, desc);}	\
	bool AddMotor(Spr::PHBallJointMotorIf* m){	return	base::AddMotor(m);}	\
	bool RemoveMotor(int n){	return	base::RemoveMotor(n);}	\
	Vec3d GetAngle(){	return	base::GetAngle();}	\
	Quaterniond GetPosition(){	return	base::GetPosition();}	\
	Vec3d GetVelocity(){	return	base::GetVelocity();}	\
	bool HasLimit(){	return	base::HasLimit();}	\
	PHBallJointLimitIf* GetLimit(){	return	base::GetLimit();}	\
	void SetSpring(double spring){	return	base::SetSpring(spring);}	\
	double GetSpring(){	return	base::GetSpring();}	\
	void SetDamper(double damper){	return	base::SetDamper(damper);}	\
	double GetDamper(){	return	base::GetDamper();}	\
	Vec3d GetSecondDamper(){	return	base::GetSecondDamper();}	\
	void SetSecondDamper(Vec3d damper2){	return	base::SetSecondDamper(damper2);}	\
	void SetTargetPosition(Quaterniond p){	return	base::SetTargetPosition(p);}	\
	Quaterniond GetTargetPosition(){	return	base::GetTargetPosition();}	\
	void SetTargetVelocity(Vec3d q){	return	base::SetTargetVelocity(q);}	\
	Vec3d GetTargetVelocity(){	return	base::GetTargetVelocity();}	\
	void SetOffsetForce(Vec3d ofst){	return	base::SetOffsetForce(ofst);}	\
	Vec3d GetOffsetForce(){	return	base::GetOffsetForce();}	\
	void SetOffsetForceN(int n, Vec3d ofst){	return	base::SetOffsetForceN(n, ofst);}	\
	Vec3d GetOffsetForceN(int n){	return	base::GetOffsetForceN(n);}	\
	void SetYieldStress(const double yS){	return	base::SetYieldStress(yS);}	\
	double GetYieldStress(){	return	base::GetYieldStress();}	\
	void SetHardnessRate(const double hR){	return	base::SetHardnessRate(hR);}	\
	double GetHardnessRate(){	return	base::GetHardnessRate();}	\
	void SetSecondMoment(const Vec3d m){	return	base::SetSecondMoment(m);}	\
	Vec3d GetSecondMoment(){	return	base::GetSecondMoment();}	\
	int NMotors(){	return	base::NMotors();}	\
	Spr::PHBallJointMotorIf** GetMotors(){	return	base::GetMotors();}	\
	Vec3d GetMotorForce(){	return	base::GetMotorForce();}	\
	Vec3d GetMotorForceN(int n){	return	base::GetMotorForceN(n);}	\
	Vec3d GetLimitForce(){	return	base::GetLimitForce();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFixJointIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSpringIf(base)	\
	void SetTargetPosition(const Vec3d& targetPosition){	return	base::SetTargetPosition(targetPosition);}	\
	Vec3d GetTargetPosition(){	return	base::GetTargetPosition();}	\
	void SetTargetOrientation(const Quaterniond& targetOrientation){	return	base::SetTargetOrientation(targetOrientation);}	\
	Quaterniond GetTargetOrientation(){	return	base::GetTargetOrientation();}	\
	void SetSpring(const Vec3d& spring){	return	base::SetSpring(spring);}	\
	Vec3d GetSpring(){	return	base::GetSpring();}	\
	void SetDamper(const Vec3d& damper){	return	base::SetDamper(damper);}	\
	Vec3d GetDamper(){	return	base::GetDamper();}	\
	void SetSecondDamper(const Vec3d& secondDamper){	return	base::SetSecondDamper(secondDamper);}	\
	Vec3d GetSecondDamper(){	return	base::GetSecondDamper();}	\
	void SetSpringOri(const double spring){	return	base::SetSpringOri(spring);}	\
	double GetSpringOri(){	return	base::GetSpringOri();}	\
	void SetDamperOri(const double damper){	return	base::SetDamperOri(damper);}	\
	double GetDamperOri(){	return	base::GetDamperOri();}	\
	void SetSecondDamperOri(const double& secondDamperOri){	return	base::SetSecondDamperOri(secondDamperOri);}	\
	double GetSecondDamperOri(){	return	base::GetSecondDamperOri();}	\
	void SetYieldStress(const double& yieldStress){	return	base::SetYieldStress(yieldStress);}	\
	double GetYieldStress(){	return	base::GetYieldStress();}	\
	void SetHardnessRate(const double& hardnessRate){	return	base::SetHardnessRate(hardnessRate);}	\
	double GetHardnessRate(){	return	base::GetHardnessRate();}	\
	void SetSecondMoment(const Vec3d& secondMoment){	return	base::SetSecondMoment(secondMoment);}	\
	Vec3d GetSecondMoment(){	return	base::GetSecondMoment();}	\
	Vec6d GetMotorForce(){	return	base::GetMotorForce();}	\
	void SetOffsetForce(const Vec6d& offsetForce){	return	base::SetOffsetForce(offsetForce);}	\
	void SetTargetVelocity(const Vec6d& targetVelocity){	return	base::SetTargetVelocity(targetVelocity);}	\
	Vec6d GetTargetVelocity(){	return	base::GetTargetVelocity();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHMateIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHPointToPointMateIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHPointToLineMateIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHPointToPlaneMateIf(base)	\
	void SetRange(Vec2d range){	return	base::SetRange(range);}	\
	void GetRange(Vec2d& range){	return	base::GetRange(range);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHLineToLineMateIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHPlaneToPlaneMateIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHTreeNodeIf(base)	\
	void Enable(bool bEnable){	return	base::Enable(bEnable);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\
	int NChildren(){	return	base::NChildren();}	\
	Spr::PHTreeNodeIf* GetParentNode(){	return	base::GetParentNode();}	\
	Spr::PHTreeNodeIf* GetChildNode(int i){	return	base::GetChildNode(i);}	\
	Spr::PHRootNodeIf* GetRootNode(){	return	base::GetRootNode();}	\
	Spr::PHSolidIf* GetSolid(){	return	base::GetSolid();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHRootNodeIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHTreeNode1DIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHHingeJointNodeIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSliderJointNodeIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHPathJointNodeIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHGenericJointNodeIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBallJointNodeIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFixJointNodeIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHGearIf(base)	\
	void Enable(bool bEnable){	return	base::Enable(bEnable);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\
	void SetRatio(double ratio){	return	base::SetRatio(ratio);}	\
	double GetRatio(){	return	base::GetRatio();}	\
	void SetOffset(double offset){	return	base::SetOffset(offset);}	\
	double GetOffset(){	return	base::GetOffset();}	\
	void SetMode(int mode){	return	base::SetMode(mode);}	\
	int GetMode(){	return	base::GetMode();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PH1DJointLimitIf(base)	\
	void SetRange(Vec2d range){	return	base::SetRange(range);}	\
	void GetRange(Vec2d& range){	return	base::GetRange(range);}	\
	void SetSpring(double spring){	return	base::SetSpring(spring);}	\
	double GetSpring(){	return	base::GetSpring();}	\
	void SetDamper(double damper){	return	base::SetDamper(damper);}	\
	double GetDamper(){	return	base::GetDamper();}	\
	bool IsOnLimit(){	return	base::IsOnLimit();}	\
	void Enable(bool b){	return	base::Enable(b);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBallJointLimitIf(base)	\
	void SetSpring(double rSpring){	return	base::SetSpring(rSpring);}	\
	double GetSpring(){	return	base::GetSpring();}	\
	void SetDamper(double rDamper){	return	base::SetDamper(rDamper);}	\
	double GetDamper(){	return	base::GetDamper();}	\
	void SetLimitDir(Vec3d limDir){	return	base::SetLimitDir(limDir);}	\
	Vec3d GetLimitDir(){	return	base::GetLimitDir();}	\
	bool IsOnLimit(){	return	base::IsOnLimit();}	\
	void Enable(bool b){	return	base::Enable(b);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBallJointConeLimitIf(base)	\
	void SetSwingRange(Vec2d range){	return	base::SetSwingRange(range);}	\
	void GetSwingRange(Vec2d& range){	return	base::GetSwingRange(range);}	\
	void SetSwingDirRange(Vec2d range){	return	base::SetSwingDirRange(range);}	\
	void GetSwingDirRange(Vec2d& range){	return	base::GetSwingDirRange(range);}	\
	void SetTwistRange(Vec2d range){	return	base::SetTwistRange(range);}	\
	void GetTwistRange(Vec2d& range){	return	base::GetTwistRange(range);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBallJointSplineLimitIf(base)	\
	void AddNode(Spr::PHSplineLimitNode node){	return	base::AddNode(node);}	\
	void AddNode(double S, double SD, double dS, double dSD, double tMin, double tMax){	return	base::AddNode(S, SD, dS, dSD, tMin, tMax);}	\
	void AddNode(Spr::PHSplineLimitNode node, int pos){	return	base::AddNode(node, pos);}	\
	void AddNode(double S, double SD, double dS, double dSD, double tMin, double tMax, int pos){	return	base::AddNode(S, SD, dS, dSD, tMin, tMax, pos);}	\
	void SetPoleTwistRange(Vec2d range){	return	base::SetPoleTwistRange(range);}	\
	void GetPoleTwistRange(Vec2d& range){	return	base::GetPoleTwistRange(range);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBallJointIndependentLimitIf(base)	\
	bool IsOnLimit(){	return	base::IsOnLimit();}	\
	int AxesEnabled(){	return	base::AxesEnabled();}	\
	void SetLimitRangeN(int n, Vec2d range){	return	base::SetLimitRangeN(n, range);}	\
	void GetLimitRangeN(int n, Vec2d& range){	return	base::GetLimitRangeN(n, range);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PH1DJointMotorIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PH1DJointNonLinearMotorIf(base)	\
	void SetSpring(Spr::PH1DJointNonLinearMotorDesc::FunctionMode m, void* param){	return	base::SetSpring(m, param);}	\
	void SetDamper(Spr::PH1DJointNonLinearMotorDesc::FunctionMode m, void* param){	return	base::SetDamper(m, param);}	\
	void SetSpringDamper(Spr::PH1DJointNonLinearMotorDesc::FunctionMode smode, Spr::PH1DJointNonLinearMotorDesc::FunctionMode dmode, void* sparam, void* dparam){	return	base::SetSpringDamper(smode, dmode, sparam, dparam);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHHuman1DJointResistanceIf(base)	\
	double GetCurrentResistance(){	return	base::GetCurrentResistance();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBallJointMotorIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBallJointNonLinearMotorIf(base)	\
	void SetFuncFromDatabaseN(int n, int i, int j, void* sparam, void* dparam){	return	base::SetFuncFromDatabaseN(n, i, j, sparam, dparam);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHHumanBallJointResistanceIf(base)	\
	Vec3d GetCurrentResistance(){	return	base::GetCurrentResistance();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSpringMotorIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHOpObjIf(base)	\
	bool initialPHOpObj(Vec3f* vts, int vtsNum, float pSize){	return	base::initialPHOpObj(vts, vtsNum, pSize);}	\
	void SetGravity(bool bOn){	return	base::SetGravity(bOn);}	\
	void SimpleSimulationStep(){	base::SimpleSimulationStep();}	\
	void AddVertextoLocalBuffer(Vec3f v){	return	base::AddVertextoLocalBuffer(v);}	\
	bool InitialObjUsingLocalBuffer(float pSize){	return	base::InitialObjUsingLocalBuffer(pSize);}	\
	void positionPredict(){	base::positionPredict();}	\
	void groupStep(){	base::groupStep();}	\
	void integrationStep(){	base::integrationStep();}	\
	void ReducedPositionProject(){	base::ReducedPositionProject();}	\
	void positionProject(){	base::positionProject();}	\
	void SetDefaultLinkNum(int linkNum){	return	base::SetDefaultLinkNum(linkNum);}	\
	void BuildBlendWeight(){	base::BuildBlendWeight();}	\
	void buildGroupCenter(){	base::buildGroupCenter();}	\
	int GetVertexNum(){	return	base::GetVertexNum();}	\
	Vec3f GetVertex(int vi){	return	base::GetVertex(vi);}	\
	Spr::ObjectIf* GetOpParticle(int pi){	return	base::GetOpParticle(pi);}	\
	Spr::ObjectIf* GetOpGroup(int gi){	return	base::GetOpGroup(gi);}	\
	int GetobjVtoPmap(int vi){	return	base::GetobjVtoPmap(vi);}	\
	float GetVtxBlendWeight(int Vtxi, int Grpi){	return	base::GetVtxBlendWeight(Vtxi, Grpi);}	\
	void SetVelocityDamping(float vd){	return	base::SetVelocityDamping(vd);}	\
	float GetVelocityDamping(){	return	base::GetVelocityDamping();}	\
	float GetBoundLength(){	return	base::GetBoundLength();}	\
	void SetBound(float b){	return	base::SetBound(b);}	\
	void SetTimeStep(float t){	return	base::SetTimeStep(t);}	\
	float GetTimeStep(){	return	base::GetTimeStep();}	\
	float GetObjBeta(){	return	base::GetObjBeta();}	\
	void SetObjBeta(float beta){	return	base::SetObjBeta(beta);}	\
	void SetObjAlpha(float alpha){	return	base::SetObjAlpha(alpha);}	\
	float GetObjAlpha(){	return	base::GetObjAlpha();}	\
	bool GetObjDstConstraint(){	return	base::GetObjDstConstraint();}	\
	void SetObjDstConstraint(bool d){	return	base::SetObjDstConstraint(d);}	\
	void SetObjItrTime(int itrT){	return	base::SetObjItrTime(itrT);}	\
	int GetObjItrTime(){	return	base::GetObjItrTime();}	\
	void StoreOrigPose(){	base::StoreOrigPose();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHOpParticleIf(base)	\
	int GetOpPtclVtxId(int vi){	return	base::GetOpPtclVtxId(vi);}	\
	int GetinGrpListNum(){	return	base::GetinGrpListNum();}	\
	int GetinGrpList(int gi){	return	base::GetinGrpList(gi);}	\
	float GetVtxDisWeight(int vi){	return	base::GetVtxDisWeight(vi);}	\
	Spr::PHOpParticleDesc* GetParticleDesc(){	return	base::GetParticleDesc();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHOpGroupIf(base)	\
	int GetGrpInPtclNum(){	return	base::GetGrpInPtclNum();}	\
	int GetGrpInPtcl(int gi){	return	base::GetGrpInPtcl(gi);}	\
	Spr::PHOpGroupDesc* GetGroupDesc(){	return	base::GetGroupDesc();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHOpHapticControllerIf(base)	\
	void SetHCForceReady(bool flag){	return	base::SetHCForceReady(flag);}	\
	bool GetHCForceReady(){	return	base::GetHCForceReady();}	\
	bool CheckProxyState(){	return	base::CheckProxyState();}	\
	void AddColliedPtcl(int pIndex, int objindex, Vec3f ctcPos){	return	base::AddColliedPtcl(pIndex, objindex, ctcPos);}	\
	bool BeginLogForce(){	return	base::BeginLogForce();}	\
	void EndLogForce(){	base::EndLogForce();}	\
	void setC_ObstacleRadius(float r){	return	base::setC_ObstacleRadius(r);}	\
	Vec3f GetUserPos(){	return	base::GetUserPos();}	\
	Vec3f GetHCPosition(){	return	base::GetHCPosition();}	\
	void SetHCPosition(Vec3f pos){	return	base::SetHCPosition(pos);}	\
	void SetHCPose(Posef pose){	return	base::SetHCPose(pose);}	\
	Posef GetHCPose(){	return	base::GetHCPose();}	\
	float GetC_ObstacleRadius(){	return	base::GetC_ObstacleRadius();}	\
	Vec3f GetCurrentOutputForce(){	return	base::GetCurrentOutputForce();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHOpHapticRendererIf(base)	\
	void SetRigid(bool set){	return	base::SetRigid(set);}	\
	bool IsRigid(){	return	base::IsRigid();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHOpAnimationIf(base)	\
	void AddAnimationP(int objIndex, int pIndex, Vec3f start, Vec3f end, float totalTime){	return	base::AddAnimationP(objIndex, pIndex, start, end, totalTime);}	\
	void AddAnimationP(int objIndex, int pIndex, Vec3f force, float totalTime){	return	base::AddAnimationP(objIndex, pIndex, force, totalTime);}	\
	void AnimationStep(void* opEngine){	return	base::AnimationStep(opEngine);}	\
	void AnimationIntergration(void* opEngine){	return	base::AnimationIntergration(opEngine);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHOpSpHashColliAgentIf(base)	\
	void SetCollisionCstrStiffness(float alpha){	return	base::SetCollisionCstrStiffness(alpha);}	\
	float GetCollisionCstrStiffness(){	return	base::GetCollisionCstrStiffness();}	\
	void EnableCollisionDetection(bool able){	return	base::EnableCollisionDetection(able);}	\
	void Initial(float cellSize, Spr::CDBounds bounds){	return	base::Initial(cellSize, bounds);}	\
	void OpCollisionProcedure(int myTimeStamp){	return	base::OpCollisionProcedure(myTimeStamp);}	\
	void OpCollisionProcedure(){	base::OpCollisionProcedure();}	\
	void OpDirCollision(){	base::OpDirCollision();}	\
	void AddContactPlane(Vec3f planeP, Vec3f planeN){	return	base::AddContactPlane(planeP, planeN);}	\
	bool IsCollisionEnabled(){	return	base::IsCollisionEnabled();}	\
	void SetIsDirCollision(bool flag){	return	base::SetIsDirCollision(flag);}	\
	bool GetIsDirCollision(){	return	base::GetIsDirCollision();}	\
	void SetDebugMode(bool flag){	return	base::SetDebugMode(flag);}	\
	bool GetDebugMode(){	return	base::GetDebugMode();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHRayIf(base)	\
	Vec3d GetOrigin(){	return	base::GetOrigin();}	\
	void SetOrigin(const Vec3d& ori){	return	base::SetOrigin(ori);}	\
	Vec3d GetDirection(){	return	base::GetDirection();}	\
	void SetDirection(const Vec3d& dir){	return	base::SetDirection(dir);}	\
	void Apply(){	base::Apply();}	\
	int NHits(){	return	base::NHits();}	\
	Spr::PHRaycastHit* GetHits(){	return	base::GetHits();}	\
	Spr::PHRaycastHit* GetNearest(){	return	base::GetNearest();}	\
	Spr::PHRaycastHit* GetDynamicalNearest(){	return	base::GetDynamicalNearest();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSceneIf(base)	\
	Spr::PHSdkIf* GetSdk(){	return	base::GetSdk();}	\
	Spr::PHSolidIf* CreateSolid(const PHSolidDesc& desc){	return	base::CreateSolid(desc);}	\
	int NSolids()const{	return	base::NSolids();}	\
	Spr::PHSolidIf* GetSolid(int idx){	return	base::GetSolid(idx);}	\
	int GetSolidIndex(Spr::PHSolidIf* s){	return	base::GetSolidIndex(s);}	\
	Spr::PHSolidIf** GetSolids(){	return	base::GetSolids();}	\
	int NSolidPairs()const{	return	base::NSolidPairs();}	\
	PHSolidPairForLCPIf* GetSolidPair(int i, int j){	return	base::GetSolidPair(i, j);}	\
	PHSolidPairForLCPIf* GetSolidPair(Spr::PHSolidIf* lhs, Spr::PHSolidIf* rhs, bool& bSwap){	return	base::GetSolidPair(lhs, rhs, bSwap);}	\
	void SetContactMode(Spr::PHSolidIf* lhs, Spr::PHSolidIf* rhs, Spr::PHSceneDesc::ContactMode mode){	return	base::SetContactMode(lhs, rhs, mode);}	\
	void SetContactMode(Spr::PHSolidIf** group, size_t length, Spr::PHSceneDesc::ContactMode mode){	return	base::SetContactMode(group, length, mode);}	\
	void SetContactMode(Spr::PHSolidIf* solid, Spr::PHSceneDesc::ContactMode mode){	return	base::SetContactMode(solid, mode);}	\
	void SetContactMode(Spr::PHSceneDesc::ContactMode mode){	return	base::SetContactMode(mode);}	\
	Spr::PHJointIf* CreateJoint(Spr::PHSolidIf* lhs, Spr::PHSolidIf* rhs, const IfInfo* ii, const Spr::PHJointDesc& desc){	return	base::CreateJoint(lhs, rhs, ii, desc);}	\
	int NJoints()const{	return	base::NJoints();}	\
	Spr::PHJointIf* GetJoint(int i){	return	base::GetJoint(i);}	\
	int NContacts()const{	return	base::NContacts();}	\
	Spr::PHContactPointIf* GetContact(int i){	return	base::GetContact(i);}	\
	int NFemMeshes()const{	return	base::NFemMeshes();}	\
	Spr::PHFemMeshIf* GetFemMesh(int i){	return	base::GetFemMesh(i);}	\
	int NFemMeshesNew()const{	return	base::NFemMeshesNew();}	\
	Spr::PHFemMeshNewIf* GetFemMeshNew(int i){	return	base::GetFemMeshNew(i);}	\
	Spr::PHRootNodeIf* CreateRootNode(Spr::PHSolidIf* root, const Spr::PHRootNodeDesc& desc){	return	base::CreateRootNode(root, desc);}	\
	int NRootNodes()const{	return	base::NRootNodes();}	\
	Spr::PHRootNodeIf* GetRootNode(int i){	return	base::GetRootNode(i);}	\
	Spr::PHTreeNodeIf* CreateTreeNode(Spr::PHTreeNodeIf* parent, Spr::PHSolidIf* child, const Spr::PHTreeNodeDesc& desc){	return	base::CreateTreeNode(parent, child, desc);}	\
	Spr::PHRootNodeIf* CreateTreeNodes(Spr::PHSolidIf* solid){	return	base::CreateTreeNodes(solid);}	\
	Spr::PHGearIf* CreateGear(Spr::PH1DJointIf* lhs, Spr::PH1DJointIf* rhs, const Spr::PHGearDesc& desc){	return	base::CreateGear(lhs, rhs, desc);}	\
	int NGears()const{	return	base::NGears();}	\
	Spr::PHGearIf* GetGear(int i){	return	base::GetGear(i);}	\
	Spr::PHPathIf* CreatePath(const Spr::PHPathDesc& desc){	return	base::CreatePath(desc);}	\
	int NPaths(){	return	base::NPaths();}	\
	Spr::PHPathIf* GetPath(int i){	return	base::GetPath(i);}	\
	Spr::PHRayIf* CreateRay(const Spr::PHRayDesc& desc){	return	base::CreateRay(desc);}	\
	int NRays(){	return	base::NRays();}	\
	Spr::PHRayIf* GetRay(int i){	return	base::GetRay(i);}	\
	bool SetPosesOfJointedSolids(const Spr::PHSolidIf* base){	return	base::SetPosesOfJointedSolids(base);}	\
	Spr::PHIKActuatorIf* CreateIKActuator(const IfInfo* ii, const Spr::PHIKActuatorDesc& desc){	return	base::CreateIKActuator(ii, desc);}	\
	int NIKActuators(){	return	base::NIKActuators();}	\
	Spr::PHIKActuatorIf* GetIKActuator(int i){	return	base::GetIKActuator(i);}	\
	Spr::PHIKEndEffectorIf* CreateIKEndEffector(const Spr::PHIKEndEffectorDesc& desc){	return	base::CreateIKEndEffector(desc);}	\
	int NIKEndEffectors(){	return	base::NIKEndEffectors();}	\
	Spr::PHIKEndEffectorIf* GetIKEndEffector(int i){	return	base::GetIKEndEffector(i);}	\
	int NSkeletons(){	return	base::NSkeletons();}	\
	PHSkeletonIf* GetSkeleton(int i){	return	base::GetSkeleton(i);}	\
	PHSkeletonIf* CreateSkeleton(const PHSkeletonDesc& desc){	return	base::CreateSkeleton(desc);}	\
	double GetTimeStep()const{	return	base::GetTimeStep();}	\
	double GetTimeStepInv()const{	return	base::GetTimeStepInv();}	\
	void SetTimeStep(double dt){	return	base::SetTimeStep(dt);}	\
	double GetHapticTimeStep()const{	return	base::GetHapticTimeStep();}	\
	void SetHapticTimeStep(double dt){	return	base::SetHapticTimeStep(dt);}	\
	unsigned int GetCount()const{	return	base::GetCount();}	\
	void SetCount(unsigned int count){	return	base::SetCount(count);}	\
	void SetGravity(const Vec3d& accel){	return	base::SetGravity(accel);}	\
	Vec3d GetGravity(){	return	base::GetGravity();}	\
	void SetAirResistanceRateForVelocity(double rate){	return	base::SetAirResistanceRateForVelocity(rate);}	\
	void SetAirResistanceRateForAngularVelocity(double rate){	return	base::SetAirResistanceRateForAngularVelocity(rate);}	\
	double GetAirResistanceRateForVelocity(){	return	base::GetAirResistanceRateForVelocity();}	\
	double GetAirResistanceRateForAngularVelocity(){	return	base::GetAirResistanceRateForAngularVelocity();}	\
	void SetContactTolerance(double tol){	return	base::SetContactTolerance(tol);}	\
	double GetContactTolerance(){	return	base::GetContactTolerance();}	\
	void SetImpactThreshold(double vth){	return	base::SetImpactThreshold(vth);}	\
	double GetImpactThreshold(){	return	base::GetImpactThreshold();}	\
	void SetFrictionThreshold(double vth){	return	base::SetFrictionThreshold(vth);}	\
	double GetFrictionThreshold(){	return	base::GetFrictionThreshold();}	\
	void SetMaxVelocity(double vmax){	return	base::SetMaxVelocity(vmax);}	\
	double GetMaxVelocity(){	return	base::GetMaxVelocity();}	\
	void SetMaxAngularVelocity(double wmax){	return	base::SetMaxAngularVelocity(wmax);}	\
	double GetMaxAngularVelocity(){	return	base::GetMaxAngularVelocity();}	\
	void SetMaxForce(double fmax){	return	base::SetMaxForce(fmax);}	\
	double GetMaxForce(){	return	base::GetMaxForce();}	\
	void SetMaxMoment(double tmax){	return	base::SetMaxMoment(tmax);}	\
	double GetMaxMoment(){	return	base::GetMaxMoment();}	\
	void SetMaxDeltaPosition(double dpmax){	return	base::SetMaxDeltaPosition(dpmax);}	\
	double GetMaxDeltaPosition(){	return	base::GetMaxDeltaPosition();}	\
	void SetMaxDeltaOrientation(double dqmax){	return	base::SetMaxDeltaOrientation(dqmax);}	\
	double GetMaxDeltaOrientation(){	return	base::GetMaxDeltaOrientation();}	\
	int GetLCPSolver(){	return	base::GetLCPSolver();}	\
	void SetLCPSolver(int method){	return	base::SetLCPSolver(method);}	\
	int GetNumIteration(){	return	base::GetNumIteration();}	\
	void SetNumIteration(int n){	return	base::SetNumIteration(n);}	\
	void SetStateMode(bool bConstraints){	return	base::SetStateMode(bConstraints);}	\
	void EnableContactDetection(bool enable){	return	base::EnableContactDetection(enable);}	\
	bool IsContactDetectionEnabled(){	return	base::IsContactDetectionEnabled();}	\
	void EnableCCD(bool enable){	return	base::EnableCCD(enable);}	\
	bool IsCCDEnabled(){	return	base::IsCCDEnabled();}	\
	void SetBroadPhaseMode(int mode){	return	base::SetBroadPhaseMode(mode);}	\
	int GetBroadPhaseMode(){	return	base::GetBroadPhaseMode();}	\
	void SetContactDetectionRange(Vec3f center, Vec3f extent, int nx, int ny, int nz){	return	base::SetContactDetectionRange(center, extent, nx, ny, nz);}	\
	void SetMaterialBlending(int mode){	return	base::SetMaterialBlending(mode);}	\
	void GetMaterialBlending(){	base::GetMaterialBlending();}	\
	void Step(){	base::Step();}	\
	void ClearForce(){	base::ClearForce();}	\
	void GenerateForce(){	base::GenerateForce();}	\
	void Integrate(){	base::Integrate();}	\
	void IntegratePart1(){	base::IntegratePart1();}	\
	void IntegratePart2(){	base::IntegratePart2();}	\
	void Clear(){	base::Clear();}	\
	int NEngines(){	return	base::NEngines();}	\
	Spr::PHEngineIf* GetEngine(int i){	return	base::GetEngine(i);}	\
	Spr::PHConstraintEngineIf* GetConstraintEngine(){	return	base::GetConstraintEngine();}	\
	Spr::PHGravityEngineIf* GetGravityEngine(){	return	base::GetGravityEngine();}	\
	Spr::PHPenaltyEngineIf* GetPenaltyEngine(){	return	base::GetPenaltyEngine();}	\
	Spr::PHIKEngineIf* GetIKEngine(){	return	base::GetIKEngine();}	\
	Spr::PHFemEngineIf* GetFemEngine(){	return	base::GetFemEngine();}	\
	Spr::PHHapticEngineIf* GetHapticEngine(){	return	base::GetHapticEngine();}	\
	Spr::PHOpEngineIf* GetOpEngine(){	return	base::GetOpEngine();}	\
	Spr::PHOpSpHashColliAgentIf* GetOpColliAgent(){	return	base::GetOpColliAgent();}	\
	Spr::PHHapticPointerIf* CreateHapticPointer(){	return	base::CreateHapticPointer();}	\
	void StepHapticLoop(){	base::StepHapticLoop();}	\
	void StepHapticSync(){	base::StepHapticSync();}	\
	Spr::UTPerformanceMeasureIf* GetPerformanceMeasure(){	return	base::GetPerformanceMeasure();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSdkIf(base)	\
	Spr::PHSceneIf* CreateScene(const Spr::PHSceneDesc& desc){	return	base::CreateScene(desc);}	\
	int NScene(){	return	base::NScene();}	\
	Spr::PHSceneIf* GetScene(int i){	return	base::GetScene(i);}	\
	void MergeScene(Spr::PHSceneIf* scene0, Spr::PHSceneIf* scene1){	return	base::MergeScene(scene0, scene1);}	\
	Spr::CDShapeIf* CreateShape(const IfInfo* ii, const Spr::CDShapeDesc& desc){	return	base::CreateShape(ii, desc);}	\
	int NShape(){	return	base::NShape();}	\
	Spr::CDShapeIf* GetShape(int i){	return	base::GetShape(i);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBoneIf(base)	\
	void SetSolid(Spr::PHSolidIf* solid){	return	base::SetSolid(solid);}	\
	Spr::PHSolidIf* GetSolid(){	return	base::GetSolid();}	\
	void SetProxySolid(Spr::PHSolidIf* solid){	return	base::SetProxySolid(solid);}	\
	Spr::PHSolidIf* GetProxySolid(){	return	base::GetProxySolid();}	\
	void SetJoint(Spr::PHJointIf* joint){	return	base::SetJoint(joint);}	\
	Spr::PHJointIf* GetJoint(){	return	base::GetJoint();}	\
	void SetParent(Spr::PHBoneIf* parent){	return	base::SetParent(parent);}	\
	Spr::PHBoneIf* GetParent(){	return	base::GetParent();}	\
	void SetLength(double length){	return	base::SetLength(length);}	\
	void SetDirection(Vec3d dir){	return	base::SetDirection(dir);}	\
	void SetPosition(Vec3d pos){	return	base::SetPosition(pos);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSkeletonIf(base)	\
	int NBones(){	return	base::NBones();}	\
	Spr::PHBoneIf* GetBone(int i){	return	base::GetBone(i);}	\
	Spr::PHBoneIf* CreateBone(Spr::PHBoneIf* parent, const Spr::PHBoneDesc& desc){	return	base::CreateBone(parent, desc);}	\
	float GetGrabStrength(){	return	base::GetGrabStrength();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHFrameIf(base)	\
	Posed GetPose(){	return	base::GetPose();}	\
	void SetPose(Posed p){	return	base::SetPose(p);}	\
	Spr::CDShapeIf* GetShape(){	return	base::GetShape();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHBodyIf(base)	\
	Posed GetPose()const{	return	base::GetPose();}	\
	Vec3d GetVelocity()const{	return	base::GetVelocity();}	\
	Vec3d GetAngularVelocity()const{	return	base::GetAngularVelocity();}	\
	Vec3d GetCenterOfMass(){	return	base::GetCenterOfMass();}	\
	Vec3d GetFramePosition(){	return	base::GetFramePosition();}	\
	Vec3d GetCenterPosition(){	return	base::GetCenterPosition();}	\
	bool IsDynamical(){	return	base::IsDynamical();}	\
	bool IsFrozen(){	return	base::IsFrozen();}	\
	void AddShape(Spr::CDShapeIf* shape){	return	base::AddShape(shape);}	\
	void AddShapes(Spr::CDShapeIf** shBegin, Spr::CDShapeIf** shEnd){	return	base::AddShapes(shBegin, shEnd);}	\
	void RemoveShape(int index){	return	base::RemoveShape(index);}	\
	void RemoveShapes(int idxBegin, int idxEnd){	return	base::RemoveShapes(idxBegin, idxEnd);}	\
	void RemoveShape(Spr::CDShapeIf* shape){	return	base::RemoveShape(shape);}	\
	int NShape(){	return	base::NShape();}	\
	Spr::CDShapeIf* GetShape(int index){	return	base::GetShape(index);}	\
	Posed GetShapePose(int index){	return	base::GetShapePose(index);}	\
	void SetShapePose(int index, const Posed& pose){	return	base::SetShapePose(index, pose);}	\
	void ClearShape(){	base::ClearShape();}	\
	void GetBBox(Vec3d& bbmin, Vec3d& bbmax, bool world){	return	base::GetBBox(bbmin, bbmax, world);}	\
	bool InvalidateBbox(){	return	base::InvalidateBbox();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSolidIf(base)	\
	void AddForce(Vec3d f){	return	base::AddForce(f);}	\
	void AddTorque(Vec3d t){	return	base::AddTorque(t);}	\
	void AddForce(Vec3d f, Vec3d r){	return	base::AddForce(f, r);}	\
	double GetMass(){	return	base::GetMass();}	\
	double GetMassInv(){	return	base::GetMassInv();}	\
	void SetMass(double m){	return	base::SetMass(m);}	\
	void SetCenterOfMass(const Vec3d& center){	return	base::SetCenterOfMass(center);}	\
	Matrix3d GetInertia(){	return	base::GetInertia();}	\
	Matrix3d GetInertiaInv(){	return	base::GetInertiaInv();}	\
	void SetInertia(const Matrix3d& I){	return	base::SetInertia(I);}	\
	void CompInertia(){	base::CompInertia();}	\
	void SetFramePosition(const Vec3d& p){	return	base::SetFramePosition(p);}	\
	void SetCenterPosition(const Vec3d& p){	return	base::SetCenterPosition(p);}	\
	Vec3d GetDeltaPosition()const{	return	base::GetDeltaPosition();}	\
	Vec3d GetDeltaPosition(const Vec3d& p)const{	return	base::GetDeltaPosition(p);}	\
	Quaterniond GetOrientation()const{	return	base::GetOrientation();}	\
	void SetOrientation(const Quaterniond& q){	return	base::SetOrientation(q);}	\
	void SetPose(const Posed& p){	return	base::SetPose(p);}	\
	void SetVelocity(const Vec3d& v){	return	base::SetVelocity(v);}	\
	void SetAngularVelocity(const Vec3d& av){	return	base::SetAngularVelocity(av);}	\
	Vec3d GetForce()const{	return	base::GetForce();}	\
	Vec3d GetTorque()const{	return	base::GetTorque();}	\
	void SetGravity(bool bOn){	return	base::SetGravity(bOn);}	\
	void SetDynamical(bool bOn){	return	base::SetDynamical(bOn);}	\
	bool IsDynamical(){	return	base::IsDynamical();}	\
	void SetStationary(bool bOn){	return	base::SetStationary(bOn);}	\
	bool IsStationary(){	return	base::IsStationary();}	\
	Spr::PHTreeNodeIf* GetTreeNode(){	return	base::GetTreeNode();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHShapePairForLCPIf(base)	\
	int NSectionVertexes(){	return	base::NSectionVertexes();}	\
	Vec3d GetSectionVertex(int i){	return	base::GetSectionVertex(i);}	\
	double GetContactDimension(){	return	base::GetContactDimension();}	\
	Vec3d GetNormalVector(){	return	base::GetNormalVector();}	\
	void GetClosestPoints(Vec3d& pa, Vec3d& pb){	return	base::GetClosestPoints(pa, pb);}	\
	Spr::CDShapeIf* GetShape(int i){	return	base::GetShape(i);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSolidPairIf(base)	\
	Spr::PHSolidIf* GetSolid(int i){	return	base::GetSolid(i);}	\
	int NListener(){	return	base::NListener();}	\
	Spr::PHCollisionListener* GetListener(int i){	return	base::GetListener(i);}	\
	void RemoveListener(int i){	return	base::RemoveListener(i);}	\
	void AddListener(Spr::PHCollisionListener* l, int pos){	return	base::AddListener(l, pos);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_PHSolidPairForLCPIf(base)	\
	bool IsContactEnabled(){	return	base::IsContactEnabled();}	\
	void EnableContact(bool enable){	return	base::EnableContact(enable);}	\
	int GetContactState(int i, int j){	return	base::GetContactState(i, j);}	\
	Vec3d GetCommonPoint(int i, int j){	return	base::GetCommonPoint(i, j);}	\
	unsigned int GetLastContactCount(int i, int j){	return	base::GetLastContactCount(i, j);}	\
	double GetContactDepth(int i, int j){	return	base::GetContactDepth(i, j);}	\
	Spr::PHShapePairForLCPIf* GetShapePair(int i, int j){	return	base::GetShapePair(i, j);}	\

