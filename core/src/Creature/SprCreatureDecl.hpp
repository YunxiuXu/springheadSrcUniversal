#define SPR_OVERRIDEMEMBERFUNCOF_CRBodyIf(base)	\
	Spr::CRBoneIf* FindByIKActuator(Spr::PHIKActuatorIf* actuator){	return	base::FindByIKActuator(actuator);}	\
	Spr::CRBoneIf* FindByLabel(UTString label){	return	base::FindByLabel(label);}	\
	int NBones(){	return	base::NBones();}	\
	Spr::CRBoneIf* GetBone(int i){	return	base::GetBone(i);}	\
	Vec3d GetCenterOfMass(){	return	base::GetCenterOfMass();}	\
	double GetSumOfMass(){	return	base::GetSumOfMass();}	\
	void Step(){	base::Step();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRBoneIf(base)	\
	const char* GetLabel()const{	return	base::GetLabel();}	\
	void SetLabel(const char* str){	return	base::SetLabel(str);}	\
	Spr::PHSolidIf* GetPHSolid(){	return	base::GetPHSolid();}	\
	void SetPHSolid(Spr::PHSolidIf* so){	return	base::SetPHSolid(so);}	\
	Spr::PHIKEndEffectorIf* GetIKEndEffector(){	return	base::GetIKEndEffector();}	\
	void SetIKEndEffector(Spr::PHIKEndEffectorIf* ikEE){	return	base::SetIKEndEffector(ikEE);}	\
	Spr::PHJointIf* GetPHJoint(){	return	base::GetPHJoint();}	\
	void SetPHJoint(Spr::PHJointIf* jo){	return	base::SetPHJoint(jo);}	\
	Spr::PHIKActuatorIf* GetIKActuator(){	return	base::GetIKActuator();}	\
	void SetIKActuator(Spr::PHIKActuatorIf* ikAct){	return	base::SetIKActuator(ikAct);}	\
	void SetParentBone(Spr::CRBoneIf* parent){	return	base::SetParentBone(parent);}	\
	Spr::CRBoneIf* GetParentBone(){	return	base::GetParentBone();}	\
	int NChildBones(){	return	base::NChildBones();}	\
	Spr::CRBoneIf* GetChildBone(int number){	return	base::GetChildBone(number);}	\
	void AddChildBone(Spr::CRBoneIf* child){	return	base::AddChildBone(child);}	\
	void ReadInitialSpringDamperFromJoint(){	base::ReadInitialSpringDamperFromJoint();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRControllerIf(base)	\
	void Reset(){	base::Reset();}	\
	int GetStatus(){	return	base::GetStatus();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRGazeControllerIf(base)	\
	void SetTargetPosition(Vec3d pos){	return	base::SetTargetPosition(pos);}	\
	Vec3d GetTargetPosition(){	return	base::GetTargetPosition();}	\
	void SetHeadBone(Spr::CRBoneIf* head){	return	base::SetHeadBone(head);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRGrabControllerIf(base)	\
	void SetTargetSolid(Spr::PHSolidIf* targetSolid){	return	base::SetTargetSolid(targetSolid);}	\
	Spr::PHSolidIf* GetGrabbingSolid(){	return	base::GetGrabbingSolid();}	\
	Spr::PHSolidIf* GetSolid(){	return	base::GetSolid();}	\
	void SetSolid(Spr::CRBoneIf* so){	return	base::SetSolid(so);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRCreatureIf(base)	\
	void Step(){	base::Step();}	\
	Spr::CRBodyIf* CreateBody(const IfInfo* ii, const Spr::CRBodyDesc& desc){	return	base::CreateBody(ii, desc);}	\
	Spr::CRBodyIf* GetBody(int i){	return	base::GetBody(i);}	\
	int NBodies(){	return	base::NBodies();}	\
	Spr::CREngineIf* CreateEngine(const IfInfo* ii, const Spr::CREngineDesc& desc){	return	base::CreateEngine(ii, desc);}	\
	Spr::CREngineIf* GetEngine(int i){	return	base::GetEngine(i);}	\
	int NEngines(){	return	base::NEngines();}	\
	Spr::PHSceneIf* GetPHScene(){	return	base::GetPHScene();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CREngineIf(base)	\
	int GetPriority()const{	return	base::GetPriority();}	\
	void Init(){	base::Init();}	\
	void Step(){	base::Step();}	\
	void Enable(bool enable){	return	base::Enable(enable);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRReachControllerIf(base)	\
	void SetIKEndEffector(Spr::PHIKEndEffectorIf* ikEff, int n){	return	base::SetIKEndEffector(ikEff, n);}	\
	Spr::PHIKEndEffectorIf* GetIKEndEffector(int n){	return	base::GetIKEndEffector(n);}	\
	void SetFinalPos(Vec3d pos){	return	base::SetFinalPos(pos);}	\
	void SetFinalVel(Vec3d vel){	return	base::SetFinalVel(vel);}	\
	void SetViaTime(float time){	return	base::SetViaTime(time);}	\
	void SetViaPos(Vec3d pos){	return	base::SetViaPos(pos);}	\
	void EnableLookatMode(bool bEnable){	return	base::EnableLookatMode(bEnable);}	\
	bool IsLookatMode(){	return	base::IsLookatMode();}	\
	void SetNumUseHands(int n){	return	base::SetNumUseHands(n);}	\
	int GetNumUseHands(){	return	base::GetNumUseHands();}	\
	void SetBaseJoint(int n, Spr::PHJointIf* jo){	return	base::SetBaseJoint(n, jo);}	\
	void SetAverageSpeed(double speed){	return	base::SetAverageSpeed(speed);}	\
	double GetAverageSpeed(){	return	base::GetAverageSpeed();}	\
	void SetMargin(double margin){	return	base::SetMargin(margin);}	\
	void SetInnerMargin(double margin){	return	base::SetInnerMargin(margin);}	\
	void SetWaitVel(double vel){	return	base::SetWaitVel(vel);}	\
	void SetRestartVel(double vel){	return	base::SetRestartVel(vel);}	\
	Vec6d GetTrajectory(float s){	return	base::GetTrajectory(s);}	\
	float GetReachTime(){	return	base::GetReachTime();}	\
	float GetTime(){	return	base::GetTime();}	\
	void Draw(){	base::Draw();}	\
	void SetOriControlCompleteTimeRatio(float oriTime){	return	base::SetOriControlCompleteTimeRatio(oriTime);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRSdkIf(base)	\
	Spr::CRCreatureIf* CreateCreature(const IfInfo* ii, const Spr::CRCreatureDesc& desc){	return	base::CreateCreature(ii, desc);}	\
	int NCreatures()const{	return	base::NCreatures();}	\
	Spr::CRCreatureIf* GetCreature(int index){	return	base::GetCreature(index);}	\
	void Step(){	base::Step();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRTouchSensorIf(base)	\
	int NContacts(){	return	base::NContacts();}	\
	Spr::CRContactInfo GetContact(int n){	return	base::GetContact(n);}	\
	void Update(){	base::Update();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRTrajectoryPlannerIf(base)	\
	void SetDepth(int d){	return	base::SetDepth(d);}	\
	int GetDepth(){	return	base::GetDepth();}	\
	void SetMaxIterate(int i){	return	base::SetMaxIterate(i);}	\
	int GetMaxIterate(){	return	base::GetMaxIterate();}	\
	void SetMaxLPF(int l){	return	base::SetMaxLPF(l);}	\
	int GetMaxLPF(){	return	base::GetMaxLPF();}	\
	void SetLPFRate(double r){	return	base::SetLPFRate(r);}	\
	double GetLPFRate(){	return	base::GetLPFRate();}	\
	void EnableCorrection(bool e){	return	base::EnableCorrection(e);}	\
	bool IsEnabledCorrection(){	return	base::IsEnabledCorrection();}	\
	void EnableStaticTarget(bool e){	return	base::EnableStaticTarget(e);}	\
	bool IsEnabledStaticTarget(){	return	base::IsEnabledStaticTarget();}	\
	void EnableSpringCorrection(bool e){	return	base::EnableSpringCorrection(e);}	\
	bool IsEbabledSpringCorrection(){	return	base::IsEbabledSpringCorrection();}	\
	void EnableJointMJTInitial(bool e){	return	base::EnableJointMJTInitial(e);}	\
	bool IsEbabledJointMJTInitial(){	return	base::IsEbabledJointMJTInitial();}	\
	void EnableViaCorrection(bool e){	return	base::EnableViaCorrection(e);}	\
	bool IsEnabledViaCorrection(){	return	base::IsEnabledViaCorrection();}	\
	void SetMaxIterateViaAdjust(int m){	return	base::SetMaxIterateViaAdjust(m);}	\
	int GetMaxIterateViaAdjust(){	return	base::GetMaxIterateViaAdjust();}	\
	void SetViaAdjustRate(double r){	return	base::SetViaAdjustRate(r);}	\
	double GetViaAdjustRate(){	return	base::GetViaAdjustRate();}	\
	void SetSpringRate(double s){	return	base::SetSpringRate(s);}	\
	double GetSpringRate(){	return	base::GetSpringRate();}	\
	void SetDamperRate(double d){	return	base::SetDamperRate(d);}	\
	double GetDamperRate(){	return	base::GetDamperRate();}	\
	void EnableMultiplePD(bool e){	return	base::EnableMultiplePD(e);}	\
	bool IsEnabledMultiplePD(){	return	base::IsEnabledMultiplePD();}	\
	void EnableChangeBias(bool e){	return	base::EnableChangeBias(e);}	\
	bool IsEnabledChangeBias(){	return	base::IsEnabledChangeBias();}	\
	void EnableChangePullback(bool e){	return	base::EnableChangePullback(e);}	\
	bool IsEnabledChangePullback(){	return	base::IsEnabledChangePullback();}	\
	void Init(){	base::Init();}	\
	void SetControlTarget(Spr::PHIKEndEffectorIf* e){	return	base::SetControlTarget(e);}	\
	void SetScene(Spr::PHSceneIf* s){	return	base::SetScene(s);}	\
	void AddViaPoint(Spr::ControlPoint c){	return	base::AddViaPoint(c);}	\
	void CalcTrajectory(){	base::CalcTrajectory();}	\
	void CalcOneStep(){	base::CalcOneStep();}	\
	void RecalcFromIterationN(int n){	return	base::RecalcFromIterationN(n);}	\
	void JointTrajStep(bool step){	return	base::JointTrajStep(step);}	\
	bool Moving(){	return	base::Moving();}	\
	void SetSpringDamper(double s, double d, bool mul){	return	base::SetSpringDamper(s, d, mul);}	\
	void Replay(int ite, bool noncorrected){	return	base::Replay(ite, noncorrected);}	\
	int GetBest(){	return	base::GetBest();}	\
	void ReloadCorrected(int k, bool nc){	return	base::ReloadCorrected(k, nc);}	\
	Posed GetTrajctoryData(int k, int n){	return	base::GetTrajctoryData(k, n);}	\
	Posed GetNotCorrectedTrajctoryData(int k, int n){	return	base::GetNotCorrectedTrajctoryData(k, n);}	\
	SpatialVector GetVeclocityData(int k, int n){	return	base::GetVeclocityData(k, n);}	\
	SpatialVector GetNotCorrectedVelocityData(int k, int n){	return	base::GetNotCorrectedVelocityData(k, n);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_CRVisualSensorIf(base)	\
	int NVisibles(){	return	base::NVisibles();}	\
	Spr::CRVisualInfo GetVisible(int n){	return	base::GetVisible(n);}	\
	void Update(){	base::Update();}	\
	void SetRange(Vec2d range){	return	base::SetRange(range);}	\
	void SetCenterRange(Vec2d range){	return	base::SetCenterRange(range);}	\
	void SetPose(Posed pose){	return	base::SetPose(pose);}	\
	void SetSolid(Spr::PHSolidIf* solid){	return	base::SetSolid(solid);}	\
	Vec2d GetRange(){	return	base::GetRange();}	\
	Vec2d GetCenterRange(){	return	base::GetCenterRange();}	\
	Posed GetPose(){	return	base::GetPose();}	\
	Spr::PHSolidIf* GetSolid(){	return	base::GetSolid();}	\

