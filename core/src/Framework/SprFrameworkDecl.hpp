#define SPR_OVERRIDEMEMBERFUNCOF_FWFemMeshIf(base)	\
	Spr::PHFemMeshIf* GetPHMesh(){	return	base::GetPHMesh();}	\
	void DrawIHBorderXZPlane(bool sw){	return	base::DrawIHBorderXZPlane(sw);}	\
	void DrawFaceEdge(){	base::DrawFaceEdge();}	\
	void SetTexmode(unsigned int mode){	return	base::SetTexmode(mode);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWFemMeshNewIf(base)	\
	Spr::PHFemMeshNewIf* GetPHFemMesh(){	return	base::GetPHFemMesh();}	\
	void SetTexmode(unsigned int mode){	return	base::SetTexmode(mode);}	\
	void EnableDrawEdgeCW(bool flag){	return	base::EnableDrawEdgeCW(flag);}	\
	void Settexmode1Map(float temp){	return	base::Settexmode1Map(temp);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWHapticPointerIf(base)	\
	void SetPHHapticPointer(Spr::PHHapticPointerIf* hpGlobal){	return	base::SetPHHapticPointer(hpGlobal);}	\
	Spr::PHHapticPointerIf* GetPHHapticPointer(){	return	base::GetPHHapticPointer();}	\
	void SetHumanInterface(Spr::HIBaseIf* hi){	return	base::SetHumanInterface(hi);}	\
	Spr::HIBaseIf* GetHumanInterface(){	return	base::GetHumanInterface();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWJoyStickGLUTIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWKeyMouseGLUTIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWObjectIf(base)	\
	Spr::PHSolidIf* GetPHSolid(){	return	base::GetPHSolid();}	\
	void SetPHSolid(Spr::PHSolidIf* s){	return	base::SetPHSolid(s);}	\
	Spr::GRFrameIf* GetGRFrame(){	return	base::GetGRFrame();}	\
	void SetGRFrame(Spr::GRFrameIf* f){	return	base::SetGRFrame(f);}	\
	Spr::PHJointIf* GetPHJoint(){	return	base::GetPHJoint();}	\
	void SetPHJoint(Spr::PHJointIf* j){	return	base::SetPHJoint(j);}	\
	Spr::GRFrameIf* GetChildFrame(){	return	base::GetChildFrame();}	\
	void SetChildFrame(Spr::GRFrameIf* f){	return	base::SetChildFrame(f);}	\
	void SetSyncSource(Spr::FWObjectDesc::FWObjectSyncSource syncSrc){	return	base::SetSyncSource(syncSrc);}	\
	Spr::FWObjectDesc::FWObjectSyncSource GetSyncSource(){	return	base::GetSyncSource();}	\
	void EnableAbsolute(bool bAbs){	return	base::EnableAbsolute(bAbs);}	\
	bool IsAbsolute(){	return	base::IsAbsolute();}	\
	bool LoadMesh(const char* filename, const IfInfo* ii, Spr::GRFrameIf* frame){	return	base::LoadMesh(filename, ii, frame);}	\
	void GenerateCDMesh(Spr::GRFrameIf* frame, const PHMaterial& mat){	return	base::GenerateCDMesh(frame, mat);}	\
	void Sync(){	base::Sync();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWOpHapticHandlerIf(base)	\
	void SetHapticflag(bool flag){	return	base::SetHapticflag(flag);}	\
	bool IsHapticEnabled(){	return	base::IsHapticEnabled();}	\
	bool doCalibration(float dt){	return	base::doCalibration(dt);}	\
	void SetHumanInterface(Spr::HIBaseIf* hi){	return	base::SetHumanInterface(hi);}	\
	Spr::HIBaseIf* GetHumanInterface(){	return	base::GetHumanInterface();}	\
	void SetHapticTimeInterval(float dt){	return	base::SetHapticTimeInterval(dt);}	\
	float GetHapticTimeInterval(){	return	base::GetHapticTimeInterval();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWOpObjIf(base)	\
	void Blend(){	base::Blend();}	\
	size_t NChildObject()const{	return	base::NChildObject();}	\
	Spr::ObjectIf* GetChildObject(size_t pos){	return	base::GetChildObject(pos);}	\
	bool AddChildObject(Spr::ObjectIf* o){	return	base::AddChildObject(o);}	\
	void CreateOpObjWithRadius(float r){	return	base::CreateOpObjWithRadius(r);}	\
	void CreateOpObj(){	base::CreateOpObj();}	\
	Spr::ObjectIf* GetOpObj(){	return	base::GetOpObj();}	\
	Spr::ObjectIf* GetGRMesh(){	return	base::GetGRMesh();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWOptimizerIf(base)	\
	void CopyScene(Spr::PHSceneIf* phSceneInput){	return	base::CopyScene(phSceneInput);}	\
	Spr::PHSceneIf* GetScene(){	return	base::GetScene();}	\
	void Init(int dimension){	return	base::Init(dimension);}	\
	void Start(){	base::Start();}	\
	void Abort(){	base::Abort();}	\
	bool IsRunning(){	return	base::IsRunning();}	\
	void Optimize(){	base::Optimize();}	\
	void Iterate(){	base::Iterate();}	\
	double ApplyPop(Spr::PHSceneIf* phScene, const double* x, int n){	return	base::ApplyPop(phScene, x, n);}	\
	double Objective(const double* x, int n){	return	base::Objective(x, n);}	\
	int NResults(){	return	base::NResults();}	\
	double GetResult(int i){	return	base::GetResult(i);}	\
	double* GetResults(){	return	base::GetResults();}	\
	double* GetProvisionalResults(){	return	base::GetProvisionalResults();}	\
	void SetESParameters(double xs, double st, double tf, double la, double mi){	return	base::SetESParameters(xs, st, tf, la, mi);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWStaticTorqueOptimizerIf(base)	\
	void Init(){	base::Init();}	\
	void Iterate(){	base::Iterate();}	\
	void ApplyResult(Spr::PHSceneIf* phScene){	return	base::ApplyResult(phScene);}	\
	double ApplyPop(Spr::PHSceneIf* phScene, const double* x, int n){	return	base::ApplyPop(phScene, x, n);}	\
	double Objective(const double* x, int n){	return	base::Objective(x, n);}	\
	void SetScene(Spr::PHSceneIf* phSceneInput){	return	base::SetScene(phSceneInput);}	\
	void Optimize(){	base::Optimize();}	\
	bool TestForTermination(){	return	base::TestForTermination();}	\
	void TakeFinalValue(){	base::TakeFinalValue();}	\
	void SetErrorWeight(double v){	return	base::SetErrorWeight(v);}	\
	double GetErrorWeight(){	return	base::GetErrorWeight();}	\
	void SetStabilityWeight(double v){	return	base::SetStabilityWeight(v);}	\
	double GetStabilityWeight(){	return	base::GetStabilityWeight();}	\
	void SetTorqueWeight(double v){	return	base::SetTorqueWeight(v);}	\
	double GetTorqueWeight(){	return	base::GetTorqueWeight();}	\
	void SetConstWeight(double v){	return	base::SetConstWeight(v);}	\
	double GetConstWeight(){	return	base::GetConstWeight();}	\
	void SetGravcenterWeight(double v){	return	base::SetGravcenterWeight(v);}	\
	double GetGravcenterWeight(){	return	base::GetGravcenterWeight();}	\
	void SetDifferentialWeight(double v){	return	base::SetDifferentialWeight(v);}	\
	double GetDifferentialWeight(){	return	base::GetDifferentialWeight();}	\
	void AddPositionConst(Spr::FWGroundConstraint* f){	return	base::AddPositionConst(f);}	\
	Spr::FWGroundConstraint GetGroundConst(int n){	return	base::GetGroundConst(n);}	\
	void ClearGroundConst(){	base::ClearGroundConst();}	\
	void AddPositionConst(Spr::FWUngroundedConstraint* f){	return	base::AddPositionConst(f);}	\
	Spr::FWUngroundedConstraint GetUngroundConst(int n){	return	base::GetUngroundConst(n);}	\
	void ClearUngroundedConst(){	base::ClearUngroundedConst();}	\
	void SetJointWeight(Spr::PHJointIf* jo, double w){	return	base::SetJointWeight(jo, w);}	\
	void SetESParameters(double xs, double st, double tf, double la, double mi){	return	base::SetESParameters(xs, st, tf, la, mi);}	\
	Spr::FWObjectiveValues GetObjectiveValues(){	return	base::GetObjectiveValues();}	\
	Vec3f GetCenterOfGravity(){	return	base::GetCenterOfGravity();}	\
	int NSupportPolygonVertices(){	return	base::NSupportPolygonVertices();}	\
	Vec3f GetSupportPolygonVerticesN(int n){	return	base::GetSupportPolygonVerticesN(n);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWSceneIf(base)	\
	Spr::FWSdkIf* GetSdk(){	return	base::GetSdk();}	\
	Spr::PHSceneIf* GetPHScene(){	return	base::GetPHScene();}	\
	void SetPHScene(Spr::PHSceneIf* s){	return	base::SetPHScene(s);}	\
	Spr::GRSceneIf* GetGRScene(){	return	base::GetGRScene();}	\
	void SetGRScene(Spr::GRSceneIf* s){	return	base::SetGRScene(s);}	\
	Spr::FWObjectIf* CreateFWObject(){	return	base::CreateFWObject();}	\
	int NObject()const{	return	base::NObject();}	\
	Spr::FWObjectIf* GetObject(int i){	return	base::GetObject(i);}	\
	Spr::FWObjectIf** GetObjects(){	return	base::GetObjects();}	\
	void Sync(){	base::Sync();}	\
	void Step(){	base::Step();}	\
	void Draw(Spr::GRRenderIf* grRender, bool debug){	return	base::Draw(grRender, debug);}	\
	void Draw(Spr::GRRenderIf* grRender){	return	base::Draw(grRender);}	\
	void DrawPHScene(Spr::GRRenderIf* render){	return	base::DrawPHScene(render);}	\
	void DrawSolid(Spr::GRRenderIf* render, Spr::PHSolidIf* solid, bool solid_or_wire){	return	base::DrawSolid(render, solid, solid_or_wire);}	\
	void DrawShape(Spr::GRRenderIf* render, Spr::CDShapeIf* shape, bool solid){	return	base::DrawShape(render, shape, solid);}	\
	void DrawConstraint(Spr::GRRenderIf* render, Spr::PHConstraintIf* con){	return	base::DrawConstraint(render, con);}	\
	void DrawContact(Spr::GRRenderIf* render, Spr::PHContactPointIf* con){	return	base::DrawContact(render, con);}	\
	void DrawIK(Spr::GRRenderIf* render, Spr::PHIKEngineIf* ikEngine){	return	base::DrawIK(render, ikEngine);}	\
	void DrawLimit(Spr::GRRenderIf* render, Spr::PHConstraintIf* con){	return	base::DrawLimit(render, con);}	\
	void DrawHaptic(Spr::GRRenderIf* render, Spr::PHHapticEngineIf* hapticEngine){	return	base::DrawHaptic(render, hapticEngine);}	\
	void SetRenderMode(bool solid, bool wire){	return	base::SetRenderMode(solid, wire);}	\
	void EnableRender(Spr::ObjectIf* obj, bool enable){	return	base::EnableRender(obj, enable);}	\
	void SetSolidMaterial(int mat, Spr::PHSolidIf* solid){	return	base::SetSolidMaterial(mat, solid);}	\
	void SetSolidMaterial(int mat, float alha, Spr::PHSolidIf* solid){	return	base::SetSolidMaterial(mat, alha, solid);}	\
	void SetWireMaterial(int mat, Spr::PHSolidIf* solid){	return	base::SetWireMaterial(mat, solid);}	\
	void SetWireMaterial(int mat, float alha, Spr::PHSolidIf* solid){	return	base::SetWireMaterial(mat, alha, solid);}	\
	void EnableRenderAxis(bool world, bool solid, bool con){	return	base::EnableRenderAxis(world, solid, con);}	\
	void SetAxisMaterial(int matX, int matY, int matZ){	return	base::SetAxisMaterial(matX, matY, matZ);}	\
	void SetAxisScale(float scaleWorld, float scaleSolid, float scaleCon){	return	base::SetAxisScale(scaleWorld, scaleSolid, scaleCon);}	\
	void SetAxisStyle(int style){	return	base::SetAxisStyle(style);}	\
	void EnableRenderForce(bool solid, bool constraint){	return	base::EnableRenderForce(solid, constraint);}	\
	void SetForceMaterial(int matForce, int matMoment){	return	base::SetForceMaterial(matForce, matMoment);}	\
	void SetForceScale(float scaleForce, float scaleMoment){	return	base::SetForceScale(scaleForce, scaleMoment);}	\
	void EnableRenderPHScene(bool enable){	return	base::EnableRenderPHScene(enable);}	\
	void EnableRenderGRScene(bool enable){	return	base::EnableRenderGRScene(enable);}	\
	void EnableRenderContact(bool enable){	return	base::EnableRenderContact(enable);}	\
	void SetContactMaterial(int mat){	return	base::SetContactMaterial(mat);}	\
	void EnableRenderBBox(bool enable){	return	base::EnableRenderBBox(enable);}	\
	void SetLocalBBoxMaterial(int mat){	return	base::SetLocalBBoxMaterial(mat);}	\
	void SetWorldBBoxMaterial(int mat){	return	base::SetWorldBBoxMaterial(mat);}	\
	void EnableRenderGrid(bool x, bool y, bool z){	return	base::EnableRenderGrid(x, y, z);}	\
	void SetGridOption(char axis, float offset, float size, int slice){	return	base::SetGridOption(axis, offset, size, slice);}	\
	void SetGridMaterial(int matX, int matY, int matZ){	return	base::SetGridMaterial(matX, matY, matZ);}	\
	void EnableRenderIK(bool enable){	return	base::EnableRenderIK(enable);}	\
	void SetIKMaterial(int mat){	return	base::SetIKMaterial(mat);}	\
	void SetIKScale(float scale){	return	base::SetIKScale(scale);}	\
	void EnableRenderLimit(bool enable){	return	base::EnableRenderLimit(enable);}	\
	void EnableRenderHaptic(bool enable){	return	base::EnableRenderHaptic(enable);}	\
	void EnableRenderFem(bool enable){	return	base::EnableRenderFem(enable);}	\
	void EnableRenderSkeletonSensor(bool enable){	return	base::EnableRenderSkeletonSensor(enable);}	\
	void EnableRenderOp(bool enable){	return	base::EnableRenderOp(enable);}	\
	void AddHumanInterface(Spr::HIForceDevice6D* d){	return	base::AddHumanInterface(d);}	\
	Spr::FWHapticPointerIf* CreateHapticPointer(){	return	base::CreateHapticPointer();}	\
	void UpdateHapticPointers(){	base::UpdateHapticPointers();}	\
	FWSkeletonSensorIf* CreateSkeletonSensor(const FWSkeletonSensorDesc& desc){	return	base::CreateSkeletonSensor(desc);}	\
	void UpdateSkeletonSensors(){	base::UpdateSkeletonSensors();}	\
	int NHapticPointers(){	return	base::NHapticPointers();}	\
	Spr::FWHapticPointerIf* GetHapticPointer(int i){	return	base::GetHapticPointer(i);}	\
	Spr::FWOpHapticHandlerIf* CreateOpHapticHandler(){	return	base::CreateOpHapticHandler();}	\
	Spr::FWOpHapticHandlerIf* GetOpHapticHandler(){	return	base::GetOpHapticHandler();}	\
	void UpdateOpHapticHandler(){	base::UpdateOpHapticHandler();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWSdkIf(base)	\
	Spr::FWSceneIf* CreateScene(const Spr::PHSceneDesc& phdesc, const Spr::GRSceneDesc& grdesc){	return	base::CreateScene(phdesc, grdesc);}	\
	bool LoadScene(UTString filename, Spr::ImportIf* ex, const IfInfo* ii, Spr::ObjectIfs* objs){	return	base::LoadScene(filename, ex, ii, objs);}	\
	bool SaveScene(UTString filename, Spr::ImportIf* ex, const IfInfo* ii, Spr::ObjectIfs* objs){	return	base::SaveScene(filename, ex, ii, objs);}	\
	int NScene()const{	return	base::NScene();}	\
	Spr::FWSceneIf* GetScene(int index){	return	base::GetScene(index);}	\
	void MergeScene(Spr::FWSceneIf* scene0, Spr::FWSceneIf* scene1){	return	base::MergeScene(scene0, scene1);}	\
	Spr::PHSdkIf* GetPHSdk(){	return	base::GetPHSdk();}	\
	Spr::GRSdkIf* GetGRSdk(){	return	base::GetGRSdk();}	\
	Spr::FISdkIf* GetFISdk(){	return	base::GetFISdk();}	\
	Spr::HISdkIf* GetHISdk(){	return	base::GetHISdk();}	\
	bool GetDebugMode(){	return	base::GetDebugMode();}	\
	void SetDebugMode(bool debug){	return	base::SetDebugMode(debug);}	\
	void Step(){	base::Step();}	\
	void Draw(){	base::Draw();}	\
	Spr::GRRenderIf* GetRender(){	return	base::GetRender();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWSkeletonSensorIf(base)	\
	void Update(){	base::Update();}	\
	void SetRadius(Vec2d r){	return	base::SetRadius(r);}	\
	Spr::HISkeletonSensorIf* GetSensor(){	return	base::GetSensor();}	\
	int NSkeleton(){	return	base::NSkeleton();}	\
	Spr::PHSkeletonIf* GetSkeleton(int i){	return	base::GetSkeleton(i);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWWinBaseIf(base)	\
	int GetID(){	return	base::GetID();}	\
	Vec2i GetPosition(){	return	base::GetPosition();}	\
	void SetPosition(int left, int top){	return	base::SetPosition(left, top);}	\
	Vec2i GetSize(){	return	base::GetSize();}	\
	void SetSize(int width, int height){	return	base::SetSize(width, height);}	\
	UTString GetTitle(){	return	base::GetTitle();}	\
	void SetTitle(UTString title){	return	base::SetTitle(title);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWControlIf(base)	\
	UTString GetLabel(){	return	base::GetLabel();}	\
	void SetLabel(UTString l){	return	base::SetLabel(l);}	\
	void SetAlign(int align){	return	base::SetAlign(align);}	\
	int GetStyle(){	return	base::GetStyle();}	\
	void SetStyle(int style){	return	base::SetStyle(style);}	\
	int GetInt(){	return	base::GetInt();}	\
	void SetInt(int val){	return	base::SetInt(val);}	\
	float GetFloat(){	return	base::GetFloat();}	\
	void SetFloat(float val){	return	base::SetFloat(val);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWPanelIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWButtonIf(base)	\
	void SetChecked(bool on){	return	base::SetChecked(on);}	\
	bool IsChecked(){	return	base::IsChecked();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWStaticTextIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWTextBoxIf(base)	\
	void SetIntRange(int rmin, int rmax){	return	base::SetIntRange(rmin, rmax);}	\
	void GetIntRange(int& rmin, int& rmax){	return	base::GetIntRange(rmin, rmax);}	\
	void SetFloatRange(float rmin, float rmax){	return	base::SetFloatRange(rmin, rmax);}	\
	void GetFloatRange(float& rmin, float& rmax){	return	base::GetFloatRange(rmin, rmax);}	\
	const char* GetString(){	return	base::GetString();}	\
	void SetString(char* str){	return	base::SetString(str);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWListBoxIf(base)	\
	void AddItem(UTString label){	return	base::AddItem(label);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWRotationControlIf(base)	\
	Matrix3f GetRotation(){	return	base::GetRotation();}	\
	void SetRotation(const Matrix3f& rot){	return	base::SetRotation(rot);}	\
	float GetDamping(){	return	base::GetDamping();}	\
	void SetDamping(float d){	return	base::SetDamping(d);}	\
	void Reset(){	base::Reset();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWTranslationControlIf(base)	\
	Vec3f GetTranslation(){	return	base::GetTranslation();}	\
	void SetTranslation(Vec3f p){	return	base::SetTranslation(p);}	\
	float GetSpeed(){	return	base::GetSpeed();}	\
	void SetSpeed(float sp){	return	base::SetSpeed(sp);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWDialogIf(base)	\
	Spr::FWControlIf* CreateControl(const IfInfo* ii, const Spr::FWControlDesc& desc, Spr::FWPanelIf* parent){	return	base::CreateControl(ii, desc, parent);}	\
	Spr::FWButtonIf* CreatePushButton(UTString label, Spr::FWPanelIf* parent){	return	base::CreatePushButton(label, parent);}	\
	Spr::FWButtonIf* CreateCheckButton(UTString label, bool checked, Spr::FWPanelIf* parent){	return	base::CreateCheckButton(label, checked, parent);}	\
	Spr::FWButtonIf* CreateRadioButton(UTString label, Spr::FWPanelIf* parent){	return	base::CreateRadioButton(label, parent);}	\
	Spr::FWStaticTextIf* CreateStaticText(UTString text, Spr::FWPanelIf* parent){	return	base::CreateStaticText(text, parent);}	\
	Spr::FWTextBoxIf* CreateTextBox(UTString label, UTString text, int style, Spr::FWPanelIf* parent){	return	base::CreateTextBox(label, text, style, parent);}	\
	Spr::FWPanelIf* CreatePanel(UTString label, int style, Spr::FWPanelIf* parent){	return	base::CreatePanel(label, style, parent);}	\
	Spr::FWPanelIf* CreateRadioGroup(Spr::FWPanelIf* parent){	return	base::CreateRadioGroup(parent);}	\
	Spr::FWRotationControlIf* CreateRotationControl(UTString label, Spr::FWPanelIf* parent){	return	base::CreateRotationControl(label, parent);}	\
	Spr::FWTranslationControlIf* CreateTranslationControl(UTString label, int style, Spr::FWPanelIf* parent){	return	base::CreateTranslationControl(label, style, parent);}	\
	Spr::FWListBoxIf* CreateListBox(UTString label, Spr::FWPanelIf* parent){	return	base::CreateListBox(label, parent);}	\
	void CreateColumn(bool sep, Spr::FWPanelIf* parent){	return	base::CreateColumn(sep, parent);}	\
	void CreateSeparator(Spr::FWPanelIf* parent){	return	base::CreateSeparator(parent);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FWWinIf(base)	\
	void SetFullScreen(){	base::SetFullScreen();}	\
	bool GetFullScreen(){	return	base::GetFullScreen();}	\
	Spr::GRRenderIf* GetRender(){	return	base::GetRender();}	\
	void SetRender(Spr::GRRenderIf* data){	return	base::SetRender(data);}	\
	Spr::FWSceneIf* GetScene(){	return	base::GetScene();}	\
	void SetScene(Spr::FWSceneIf* s){	return	base::SetScene(s);}	\
	Spr::DVKeyMouseIf* GetKeyMouse(){	return	base::GetKeyMouse();}	\
	void SetKeyMouse(Spr::DVKeyMouseIf* dv){	return	base::SetKeyMouse(dv);}	\
	Spr::DVJoyStickIf* GetJoyStick(){	return	base::GetJoyStick();}	\
	void SetJoyStick(Spr::DVJoyStickIf* dv){	return	base::SetJoyStick(dv);}	\
	Spr::HITrackballIf* GetTrackball(){	return	base::GetTrackball();}	\
	void SetTrackball(Spr::HITrackballIf* dv){	return	base::SetTrackball(dv);}	\
	void SetDebugMode(bool ph_or_gr){	return	base::SetDebugMode(ph_or_gr);}	\
	bool GetDebugMode(){	return	base::GetDebugMode();}	\
	void Display(){	base::Display();}	\
	Spr::FWDialogIf* CreateDialog(const Spr::FWDialogDesc& desc){	return	base::CreateDialog(desc);}	\
	void CalcViewport(int& left, int& top, int& width, int& height){	return	base::CalcViewport(left, top, width, height);}	\

