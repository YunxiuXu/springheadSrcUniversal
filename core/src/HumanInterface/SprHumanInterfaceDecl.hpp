#define SPR_OVERRIDEMEMBERFUNCOF_HIBaseIf(base)	\
	bool BeforeCalibration(){	return	base::BeforeCalibration();}	\
	bool Calibration(){	return	base::Calibration();}	\
	bool AfterCalibration(){	return	base::AfterCalibration();}	\
	void AddDeviceDependency(HIRealDeviceIf* rd){	return	base::AddDeviceDependency(rd);}	\
	void ClearDeviceDependency(){	base::ClearDeviceDependency();}	\
	void Update(float dt){	return	base::Update(dt);}	\
	bool IsGood(){	return	base::IsGood();}	\
	bool Init(const void* desc){	return	base::Init(desc);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HIHapticDummyIf(base)	\
	void SetPose(Posed p){	return	base::SetPose(p);}	\
	void SetVelocity(Vec3d v){	return	base::SetVelocity(v);}	\
	void SetAngularVelocity(Vec3d v){	return	base::SetAngularVelocity(v);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HIDeviceIf(base)	\
	void SetName(const char* n){	return	base::SetName(n);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HIRealDeviceIf(base)	\
	bool Init(){	return	base::Init();}	\
	Spr::HIVirtualDeviceIf* Rent(const IfInfo* ii, const char* name, int portNo){	return	base::Rent(ii, name, portNo);}	\
	bool Return(Spr::HIVirtualDeviceIf* dv){	return	base::Return(dv);}	\
	void Update(){	base::Update();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HIVirtualDeviceIf(base)	\
	int GetPortNo()const{	return	base::GetPortNo();}	\
	bool IsUsed(){	return	base::IsUsed();}	\
	Spr::HIRealDeviceIf* GetRealDevice(){	return	base::GetRealDevice();}	\
	void Update(){	base::Update();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DVAdIf(base)	\
	int Digit(){	return	base::Digit();}	\
	float Voltage(){	return	base::Voltage();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DVDaIf(base)	\
	void Digit(int d){	return	base::Digit(d);}	\
	void Voltage(float volt){	return	base::Voltage(volt);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DVCounterIf(base)	\
	void Count(long count){	return	base::Count(count);}	\
	long Count(){	return	base::Count();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DVPioIf(base)	\
	int Get(){	return	base::Get();}	\
	void Set(int l){	return	base::Set(l);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DVForceIf(base)	\
	int GetDOF(){	return	base::GetDOF();}	\
	float GetForce(int ch){	return	base::GetForce(ch);}	\
	void GetForce3(Vec3f& f){	return	base::GetForce3(f);}	\
	void GetForce6(Vec3f& f, Vec3f& t){	return	base::GetForce6(f, t);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DRUARTMotorDriverIf(base)	\
	int NMotor(){	return	base::NMotor();}	\
	int NForce(){	return	base::NForce();}	\
	long ReadForce(int ch){	return	base::ReadForce(ch);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DRUsb20SimpleIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_DRUsb20Sh4If(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_DRCyUsb20Sh4If(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_DVJoyStickIf(base)	\
	void AddCallback(Spr::DVJoyStickCallback* cb){	return	base::AddCallback(cb);}	\
	void RemoveCallback(Spr::DVJoyStickCallback* cb){	return	base::RemoveCallback(cb);}	\
	void SetPollInterval(int ms){	return	base::SetPollInterval(ms);}	\
	int GetPollInterval(){	return	base::GetPollInterval();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DVKeyMouseIf(base)	\
	void AddCallback(Spr::DVKeyMouseCallback* cb){	return	base::AddCallback(cb);}	\
	void RemoveCallback(Spr::DVKeyMouseCallback* cb){	return	base::RemoveCallback(cb);}	\
	int GetKeyState(int key){	return	base::GetKeyState(key);}	\
	void GetMousePosition(int& x, int& y, int& time, int count){	return	base::GetMousePosition(x, y, time, count);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_DRKeyMouseWin32If(base)	\
	bool PreviewMessage(void* m){	return	base::PreviewMessage(m);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HILeapIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_HILeapUDPIf(base)	\
	bool calibrate(int formerLeapID){	return	base::calibrate(formerLeapID);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISdkIf(base)	\
	Spr::HIVirtualDeviceIf* RentVirtualDevice(const IfInfo* ii, const char* rname, int portNum){	return	base::RentVirtualDevice(ii, rname, portNum);}	\
	Spr::HIVirtualDeviceIf* RentVirtualDevice(const char* itype, const char* rname, int portNum){	return	base::RentVirtualDevice(itype, rname, portNum);}	\
	bool ReturnVirtualDevice(Spr::HIVirtualDeviceIf* dev){	return	base::ReturnVirtualDevice(dev);}	\
	Spr::HIRealDeviceIf* AddRealDevice(const IfInfo* keyInfo, const void* desc){	return	base::AddRealDevice(keyInfo, desc);}	\
	Spr::HIRealDeviceIf* FindRealDevice(const char* name){	return	base::FindRealDevice(name);}	\
	Spr::HIRealDeviceIf* FindRealDevice(const IfInfo* ii){	return	base::FindRealDevice(ii);}	\
	Spr::HIBaseIf* CreateHumanInterface(const IfInfo* info){	return	base::CreateHumanInterface(info);}	\
	Spr::HIBaseIf* CreateHumanInterface(const char* name){	return	base::CreateHumanInterface(name);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HIBoneIf(base)	\
	Spr::HIBoneIf* GetParent(){	return	base::GetParent();}	\
	Vec3d GetPosition(){	return	base::GetPosition();}	\
	Vec3d GetDirection(){	return	base::GetDirection();}	\
	double GetLength(){	return	base::GetLength();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISkeletonIf(base)	\
	Posed GetPose(){	return	base::GetPose();}	\
	int NBones(){	return	base::NBones();}	\
	Spr::HIBoneIf* GetBone(int i){	return	base::GetBone(i);}	\
	Spr::HIBoneIf* GetRoot(){	return	base::GetRoot();}	\
	float GetGrabStrength(){	return	base::GetGrabStrength();}	\
	bool IsTracked(){	return	base::IsTracked();}	\
	int GetTrackID(){	return	base::GetTrackID();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISkeletonSensorIf(base)	\
	int NSkeletons(){	return	base::NSkeletons();}	\
	Spr::HISkeletonIf* GetSkeleton(int i){	return	base::GetSkeleton(i);}	\
	void SetScale(double s){	return	base::SetScale(s);}	\
	void SetCenter(Vec3d c){	return	base::SetCenter(c);}	\
	void SetRotation(Quaterniond q){	return	base::SetRotation(q);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISpidarMotorIf(base)	\
	void SetForce(float f){	return	base::SetForce(f);}	\
	float GetForce(){	return	base::GetForce();}	\
	void SetLimitMinForce(float f){	return	base::SetLimitMinForce(f);}	\
	void SetLimitMaxForce(float f){	return	base::SetLimitMaxForce(f);}	\
	Vec2f GetLimitForce(){	return	base::GetLimitForce();}	\
	float GetCurrent(){	return	base::GetCurrent();}	\
	void SetLength(float l){	return	base::SetLength(l);}	\
	float GetLength(){	return	base::GetLength();}	\
	float GetVelocity(){	return	base::GetVelocity();}	\
	void GetCalibrationData(float dt){	return	base::GetCalibrationData(dt);}	\
	void Calibrate(bool bUpdate){	return	base::Calibrate(bUpdate);}	\
	void GetVdd(){	base::GetVdd();}	\
	int GetCount(){	return	base::GetCount();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HIPoseIf(base)	\
	Vec3f GetPosition(){	return	base::GetPosition();}	\
	Quaternionf GetOrientation(){	return	base::GetOrientation();}	\
	Posef GetPose(){	return	base::GetPose();}	\
	Affinef GetAffine(){	return	base::GetAffine();}	\
	Vec3f GetVelocity(){	return	base::GetVelocity();}	\
	Vec3f GetAngularVelocity(){	return	base::GetAngularVelocity();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HIHapticIf(base)	\
	Vec3f GetTorque(){	return	base::GetTorque();}	\
	Vec3f GetForce(){	return	base::GetForce();}	\
	void SetForce(const Vec3f& f, const Vec3f& t){	return	base::SetForce(f, t);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HINovintFalconIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISpaceNavigatorIf(base)	\
	bool SetPose(Posef pose){	return	base::SetPose(pose);}	\
	void SetMaxVelocity(float mV){	return	base::SetMaxVelocity(mV);}	\
	void SetMaxAngularVelocity(float mAV){	return	base::SetMaxAngularVelocity(mAV);}	\
	bool PreviewMessage(void* m){	return	base::PreviewMessage(m);}	\
	void SetViewMatrix(Affinef view){	return	base::SetViewMatrix(view);}	\
	void SetPersMatrix(Affinef pers){	return	base::SetPersMatrix(pers);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISpidarIf(base)	\
	const char* GetSpidarType(){	return	base::GetSpidarType();}	\
	void SetLimitMinForce(float f){	return	base::SetLimitMinForce(f);}	\
	void SetLimitMaxForce(float f){	return	base::SetLimitMaxForce(f);}	\
	Spr::HISpidarMotorIf* GetMotor(size_t i){	return	base::GetMotor(i);}	\
	size_t NMotor()const{	return	base::NMotor();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISpidar4If(base)	\
	Spr::HISpidarMotorIf* GetMotor(size_t i){	return	base::GetMotor(i);}	\
	size_t NMotor()const{	return	base::NMotor();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISpidar4DIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_HISpidarGIf(base)	\
	Vec3f GetTorque(){	return	base::GetTorque();}	\
	Vec3f GetForce(){	return	base::GetForce();}	\
	void SetForce(const Vec3f& f, const Vec3f& t){	return	base::SetForce(f, t);}	\
	Spr::HISpidarMotorIf* GetMotor(size_t i){	return	base::GetMotor(i);}	\
	size_t NMotor()const{	return	base::NMotor();}	\
	int GetButton(size_t i){	return	base::GetButton(i);}	\
	size_t NButton()const{	return	base::NButton();}	\
	void SetWeight(float s, float t, float r){	return	base::SetWeight(s, t, r);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HITrackballIf(base)	\
	void SetMode(bool mode){	return	base::SetMode(mode);}	\
	bool GetMode(){	return	base::GetMode();}	\
	void SetTarget(Vec3f t){	return	base::SetTarget(t);}	\
	Vec3f GetTarget(){	return	base::GetTarget();}	\
	void SetAngle(float lon, float lat){	return	base::SetAngle(lon, lat);}	\
	void GetAngle(float& lon, float& lat){	return	base::GetAngle(lon, lat);}	\
	void SetDistance(float dist){	return	base::SetDistance(dist);}	\
	float GetDistance(){	return	base::GetDistance();}	\
	void SetLongitudeRange(float rmin, float rmax){	return	base::SetLongitudeRange(rmin, rmax);}	\
	void GetLongitudeRange(float& rmin, float& rmax){	return	base::GetLongitudeRange(rmin, rmax);}	\
	void SetLatitudeRange(float rmin, float rmax){	return	base::SetLatitudeRange(rmin, rmax);}	\
	void GetLatitudeRange(float& rmin, float& rmax){	return	base::GetLatitudeRange(rmin, rmax);}	\
	void SetDistanceRange(float rmin, float rmax){	return	base::SetDistanceRange(rmin, rmax);}	\
	void GetDistanceRange(float& rmin, float& rmax){	return	base::GetDistanceRange(rmin, rmax);}	\
	void SetRotGain(float g){	return	base::SetRotGain(g);}	\
	float GetRotGain(){	return	base::GetRotGain();}	\
	void SetZoomGain(float g){	return	base::SetZoomGain(g);}	\
	float GetZoomGain(){	return	base::GetZoomGain();}	\
	void SetTrnGain(float g){	return	base::SetTrnGain(g);}	\
	float GetTrnGain(){	return	base::GetTrnGain();}	\
	void Fit(const Spr::GRCameraDesc& cam, float radius){	return	base::Fit(cam, radius);}	\
	void SetPosition(Vec3f pos){	return	base::SetPosition(pos);}	\
	void SetOrientation(Quaternionf ori){	return	base::SetOrientation(ori);}	\
	void Enable(bool on){	return	base::Enable(on);}	\
	void SetRotMask(int mask){	return	base::SetRotMask(mask);}	\
	void SetZoomMask(int mask){	return	base::SetZoomMask(mask);}	\
	void SetTrnMask(int mask){	return	base::SetTrnMask(mask);}	\
	Spr::DVKeyMouseIf* GetKeyMouse(){	return	base::GetKeyMouse();}	\
	void SetKeyMouse(Spr::DVKeyMouseIf* dv){	return	base::SetKeyMouse(dv);}	\
	void SetCallback(Spr::HITrackballCallback* callback){	return	base::SetCallback(callback);}	\
	void UpdateView(){	base::UpdateView();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_HIXbox360ControllerIf(base)	\
	bool Init(){	return	base::Init();}	\
	void SetMaxVelocity(float v){	return	base::SetMaxVelocity(v);}	\
	void SetMaxAngularVelocity(float v){	return	base::SetMaxAngularVelocity(v);}	\
	void SetVibration(Vec2f lr){	return	base::SetVibration(lr);}	\
	bool UP(){	return	base::UP();}	\
	bool DOWN(){	return	base::DOWN();}	\
	bool LEFT(){	return	base::LEFT();}	\
	bool RIGHT(){	return	base::RIGHT();}	\
	bool START(){	return	base::START();}	\
	bool BACK(){	return	base::BACK();}	\
	bool LTHUMB(){	return	base::LTHUMB();}	\
	bool RTHUMB(){	return	base::RTHUMB();}	\
	bool LSHOULDER(){	return	base::LSHOULDER();}	\
	bool RSHOULDER(){	return	base::RSHOULDER();}	\
	bool A(){	return	base::A();}	\
	bool B(){	return	base::B();}	\
	bool X(){	return	base::X();}	\
	bool Y(){	return	base::Y();}	\

