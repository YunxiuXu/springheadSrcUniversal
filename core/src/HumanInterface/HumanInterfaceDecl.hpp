#define SPR_DECLMEMBEROF_HIHapticDummyDesc \
protected:\
	Posed	pose;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		pose = ((HIHapticDummyDesc*)ptr)->pose;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((HIHapticDummyDesc*)ptr)->pose = pose;	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_DRUARTMotorDriverDesc \
protected:\
	int	port;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		port = ((DRUARTMotorDriverDesc*)ptr)->port;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((DRUARTMotorDriverDesc*)ptr)->port = port;	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_DRUsb20SimpleDesc \
protected:\
	int	channel;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		channel = ((DRUsb20SimpleDesc*)ptr)->channel;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((DRUsb20SimpleDesc*)ptr)->channel = channel;	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_DRUsb20Sh4Desc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		DRUsb20Simple::SetDesc((DRUsb20SimpleDesc*)(DRUsb20Sh4Desc*)ptr);	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		DRUsb20Simple::GetDesc((DRUsb20SimpleDesc*)(DRUsb20Sh4Desc*)ptr);	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_DRCyUsb20Sh4Desc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		DRUsb20Sh4::SetDesc((DRUsb20Sh4Desc*)(DRCyUsb20Sh4Desc*)ptr);	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		DRUsb20Sh4::GetDesc((DRUsb20Sh4Desc*)(DRCyUsb20Sh4Desc*)ptr);	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_DRKeyMouseWin32Desc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HILeapDesc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HILeapUDPDesc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HINovintFalconDesc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HISdkDesc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HISpaceNavigatorDesc \
protected:\
	void*	hWnd;	\
	float	maxVelocity;	\
	float	maxAngularVelocity;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		hWnd = ((HISpaceNavigatorDesc*)ptr)->hWnd;	\
		maxVelocity = ((HISpaceNavigatorDesc*)ptr)->maxVelocity;	\
		maxAngularVelocity = ((HISpaceNavigatorDesc*)ptr)->maxAngularVelocity;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((HISpaceNavigatorDesc*)ptr)->hWnd = hWnd;	\
		((HISpaceNavigatorDesc*)ptr)->maxVelocity = maxVelocity;	\
		((HISpaceNavigatorDesc*)ptr)->maxAngularVelocity = maxAngularVelocity;	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HISpidarMotorDesc \
protected:\
	int	ch;	\
	float	maxForce;	\
	float	minForce;	\
	float	voltPerNewton;	\
	float	currentPerVolt;	\
	float	lengthPerPulse;	\
	Vec3f	pos;	\
	Vec3f	jointPos;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		ch = ((HISpidarMotorDesc*)ptr)->ch;	\
		maxForce = ((HISpidarMotorDesc*)ptr)->maxForce;	\
		minForce = ((HISpidarMotorDesc*)ptr)->minForce;	\
		voltPerNewton = ((HISpidarMotorDesc*)ptr)->voltPerNewton;	\
		currentPerVolt = ((HISpidarMotorDesc*)ptr)->currentPerVolt;	\
		lengthPerPulse = ((HISpidarMotorDesc*)ptr)->lengthPerPulse;	\
		pos = ((HISpidarMotorDesc*)ptr)->pos;	\
		jointPos = ((HISpidarMotorDesc*)ptr)->jointPos;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((HISpidarMotorDesc*)ptr)->ch = ch;	\
		((HISpidarMotorDesc*)ptr)->maxForce = maxForce;	\
		((HISpidarMotorDesc*)ptr)->minForce = minForce;	\
		((HISpidarMotorDesc*)ptr)->voltPerNewton = voltPerNewton;	\
		((HISpidarMotorDesc*)ptr)->currentPerVolt = currentPerVolt;	\
		((HISpidarMotorDesc*)ptr)->lengthPerPulse = lengthPerPulse;	\
		((HISpidarMotorDesc*)ptr)->pos = pos;	\
		((HISpidarMotorDesc*)ptr)->jointPos = jointPos;	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HISpidarDesc \
protected:\
	std::string	type;	\
	std::vector< Spr::HISpidarMotorDesc >	motors;	\
	int	nButton;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		type = ((HISpidarDesc*)ptr)->type;	\
		motors = ((HISpidarDesc*)ptr)->motors;	\
		nButton = ((HISpidarDesc*)ptr)->nButton;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((HISpidarDesc*)ptr)->type = type;	\
		((HISpidarDesc*)ptr)->motors = motors;	\
		((HISpidarDesc*)ptr)->nButton = nButton;	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HISpidar4Desc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		HISpidar::SetDesc((HISpidarDesc*)(HISpidar4Desc*)ptr);	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		HISpidar::GetDesc((HISpidarDesc*)(HISpidar4Desc*)ptr);	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HISpidar4DDesc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		HISpidar4::SetDesc((HISpidar4Desc*)(HISpidar4DDesc*)ptr);	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		HISpidar4::GetDesc((HISpidar4Desc*)(HISpidar4DDesc*)ptr);	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HISpidarGDesc \
protected:\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		HISpidar::SetDesc((HISpidarDesc*)(HISpidarGDesc*)ptr);	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		HISpidar::GetDesc((HISpidarDesc*)(HISpidarGDesc*)ptr);	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HITrackballDesc \
protected:\
	bool	trackball;	\
	Vec3f	target;	\
	float	longitude;	\
	float	latitude;	\
	Vec2f	lonRange;	\
	Vec2f	latRange;	\
	float	distance;	\
	Vec2f	distRange;	\
	float	rotGain;	\
	float	zoomGain;	\
	float	trnGain;	\
	int	rotMask;	\
	int	zoomMask;	\
	int	trnMask;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		trackball = ((HITrackballDesc*)ptr)->trackball;	\
		target = ((HITrackballDesc*)ptr)->target;	\
		longitude = ((HITrackballDesc*)ptr)->longitude;	\
		latitude = ((HITrackballDesc*)ptr)->latitude;	\
		lonRange = ((HITrackballDesc*)ptr)->lonRange;	\
		latRange = ((HITrackballDesc*)ptr)->latRange;	\
		distance = ((HITrackballDesc*)ptr)->distance;	\
		distRange = ((HITrackballDesc*)ptr)->distRange;	\
		rotGain = ((HITrackballDesc*)ptr)->rotGain;	\
		zoomGain = ((HITrackballDesc*)ptr)->zoomGain;	\
		trnGain = ((HITrackballDesc*)ptr)->trnGain;	\
		rotMask = ((HITrackballDesc*)ptr)->rotMask;	\
		zoomMask = ((HITrackballDesc*)ptr)->zoomMask;	\
		trnMask = ((HITrackballDesc*)ptr)->trnMask;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((HITrackballDesc*)ptr)->trackball = trackball;	\
		((HITrackballDesc*)ptr)->target = target;	\
		((HITrackballDesc*)ptr)->longitude = longitude;	\
		((HITrackballDesc*)ptr)->latitude = latitude;	\
		((HITrackballDesc*)ptr)->lonRange = lonRange;	\
		((HITrackballDesc*)ptr)->latRange = latRange;	\
		((HITrackballDesc*)ptr)->distance = distance;	\
		((HITrackballDesc*)ptr)->distRange = distRange;	\
		((HITrackballDesc*)ptr)->rotGain = rotGain;	\
		((HITrackballDesc*)ptr)->zoomGain = zoomGain;	\
		((HITrackballDesc*)ptr)->trnGain = trnGain;	\
		((HITrackballDesc*)ptr)->rotMask = rotMask;	\
		((HITrackballDesc*)ptr)->zoomMask = zoomMask;	\
		((HITrackballDesc*)ptr)->trnMask = trnMask;	\
		return true;	\
	}\

#define SPR_DECLMEMBEROF_HIXbox360ControllerDesc \
protected:\
	float	maxVelocity;	\
	float	maxAngularVelocity;	\
public:\
	virtual const void* GetDescAddress() const { return NULL; }\
	virtual void SetDesc(const void* ptr){ \
		maxVelocity = ((HIXbox360ControllerDesc*)ptr)->maxVelocity;	\
		maxAngularVelocity = ((HIXbox360ControllerDesc*)ptr)->maxAngularVelocity;	\
		AfterSetDesc();	\
	}\
	virtual bool GetDesc(void* ptr) const { \
		BeforeGetDesc();	\
		((HIXbox360ControllerDesc*)ptr)->maxVelocity = maxVelocity;	\
		((HIXbox360ControllerDesc*)ptr)->maxAngularVelocity = maxAngularVelocity;	\
		return true;	\
	}\

