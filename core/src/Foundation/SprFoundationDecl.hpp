#define SPR_OVERRIDEMEMBERFUNCOF_ObjectIf(base)	\
	void Print(std::ostream& os)const{	return	base::Print(os);}	\
	void PrintShort(std::ostream& os)const{	return	base::PrintShort(os);}	\
	int AddRef(){	return	base::AddRef();}	\
	int RefCount(){	return	base::RefCount();}	\
	size_t NChildObject()const{	return	base::NChildObject();}	\
	Spr::ObjectIf* GetChildObject(size_t pos){	return	base::GetChildObject(pos);}	\
	const Spr::ObjectIf* GetChildObject(size_t pos)const{	return	base::GetChildObject(pos);}	\
	bool AddChildObject(Spr::ObjectIf* o){	return	base::AddChildObject(o);}	\
	bool DelChildObject(Spr::ObjectIf* o){	return	base::DelChildObject(o);}	\
	void Clear(){	base::Clear();}	\
	Spr::ObjectIf* CreateObject(const IfInfo* info, const void* desc){	return	base::CreateObject(info, desc);}	\
	const void* GetDescAddress()const{	return	base::GetDescAddress();}	\
	bool GetDesc(void* desc)const{	return	base::GetDesc(desc);}	\
	void SetDesc(const void* desc){	return	base::SetDesc(desc);}	\
	size_t GetDescSize()const{	return	base::GetDescSize();}	\
	const void* GetStateAddress()const{	return	base::GetStateAddress();}	\
	bool GetState(void* state)const{	return	base::GetState(state);}	\
	void SetState(const void* state){	return	base::SetState(state);}	\
	bool WriteStateR(std::ostream& fout){	return	base::WriteStateR(fout);}	\
	bool WriteState(std::string fileName){	return	base::WriteState(fileName);}	\
	bool ReadStateR(std::istream& fin){	return	base::ReadStateR(fin);}	\
	bool ReadState(std::string fileName){	return	base::ReadState(fileName);}	\
	size_t GetStateSize()const{	return	base::GetStateSize();}	\
	void ConstructState(void* m)const{	return	base::ConstructState(m);}	\
	void DestructState(void* m)const{	return	base::DestructState(m);}	\
	void DumpObjectR(std::ostream& os, int level)const{	return	base::DumpObjectR(os, level);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_NamedObjectIf(base)	\
	const char* GetName()const{	return	base::GetName();}	\
	void SetName(const char* n){	return	base::SetName(n);}	\
	Spr::NameManagerIf* GetNameManager(){	return	base::GetNameManager();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_SceneObjectIf(base)	\
	Spr::SceneIf* GetScene(){	return	base::GetScene();}	\
	Spr::SceneObjectIf* CloneObject(){	return	base::CloneObject();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_ObjectStatesIf(base)	\
	void AllocateState(Spr::ObjectIf* o){	return	base::AllocateState(o);}	\
	void ReleaseState(Spr::ObjectIf* o){	return	base::ReleaseState(o);}	\
	size_t CalcStateSize(Spr::ObjectIf* o){	return	base::CalcStateSize(o);}	\
	void SaveState(Spr::ObjectIf* o){	return	base::SaveState(o);}	\
	void LoadState(Spr::ObjectIf* o){	return	base::LoadState(o);}	\
	void SingleSave(Spr::ObjectIf* o){	return	base::SingleSave(o);}	\
	void SingleLoad(Spr::ObjectIf* o){	return	base::SingleLoad(o);}	\
	bool IsAllocated(){	return	base::IsAllocated();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_UTTypeDescIf(base)	\
	void SetSize(size_t sz){	return	base::SetSize(sz);}	\
	void SetAccess(Spr::UTAccessBase* a){	return	base::SetAccess(a);}	\
	void SetOffset(int field, int offset){	return	base::SetOffset(field, offset);}	\
	void SetIfInfo(const IfInfo* info){	return	base::SetIfInfo(info);}	\
	int AddField(std::string pre, std::string ty, std::string n, std::string post){	return	base::AddField(pre, ty, n, post);}	\
	int AddBase(std::string tn){	return	base::AddBase(tn);}	\
	void AddEnumConst(int field, std::string name, int val){	return	base::AddEnumConst(field, name, val);}	\
	void Print(std::ostream& os)const{	return	base::Print(os);}	\
	std::string GetTypeName()const{	return	base::GetTypeName();}	\
	void SetTypeName(const char* s){	return	base::SetTypeName(s);}	\
	size_t GetSize(){	return	base::GetSize();}	\
	bool IsPrimitive(){	return	base::IsPrimitive();}	\
	bool IsSimple(){	return	base::IsSimple();}	\
	int NFields(){	return	base::NFields();}	\
	Spr::UTTypeDescIf* GetFieldType(int i){	return	base::GetFieldType(i);}	\
	int GetFieldLength(int i){	return	base::GetFieldLength(i);}	\
	int GetFieldVectorSize(int i, const void* base){	return	base::GetFieldVectorSize(i, base);}	\
	const char* GetFieldLengthName(int i){	return	base::GetFieldLengthName(i);}	\
	Spr::UTTypeDescIf::FieldType GetFieldVarType(int i){	return	base::GetFieldVarType(i);}	\
	bool GetFieldIsReference(int i){	return	base::GetFieldIsReference(i);}	\
	const char* GetFieldName(int i){	return	base::GetFieldName(i);}	\
	void* GetFieldAddress(int i, void* base, int pos){	return	base::GetFieldAddress(i, base, pos);}	\
	const void* GetFieldAddress(int i, const void* base, int pos){	return	base::GetFieldAddress(i, base, pos);}	\
	void* GetFieldAddressEx(int i, void* base, int pos){	return	base::GetFieldAddressEx(i, base, pos);}	\
	std::string ReadToString(int i, void* base, int pos){	return	base::ReadToString(i, base, pos);}	\
	void WriteFromString(std::string from, int i, void* base, int pos){	return	base::WriteFromString(from, i, base, pos);}	\
	const IfInfo* GetIfInfoOfType(){	return	base::GetIfInfoOfType();}	\
	bool IsBool(){	return	base::IsBool();}	\
	bool IsNumber(){	return	base::IsNumber();}	\
	bool IsString(){	return	base::IsString();}	\
	bool ReadBool(const void* ptr){	return	base::ReadBool(ptr);}	\
	void WriteBool(bool val, void* ptr){	return	base::WriteBool(val, ptr);}	\
	double ReadNumber(const void* ptr){	return	base::ReadNumber(ptr);}	\
	void WriteNumber(double val, void* ptr){	return	base::WriteNumber(val, ptr);}	\
	std::string ReadString(const void* ptr){	return	base::ReadString(ptr);}	\
	void WriteString(const char* val, void* ptr){	return	base::WriteString(val, ptr);}	\
	void* Create(){	return	base::Create();}	\
	void Delete(void* ptr){	return	base::Delete(ptr);}	\
	void* VectorPush(void* v){	return	base::VectorPush(v);}	\
	void VectorPop(void* v){	return	base::VectorPop(v);}	\
	void* VectorAt(void* v, int pos){	return	base::VectorAt(v, pos);}	\
	const void* VectorAt(const void* v, int pos){	return	base::VectorAt(v, pos);}	\
	size_t VectorSize(const void* v){	return	base::VectorSize(v);}	\
	size_t SizeOfVector(){	return	base::SizeOfVector();}	\
	void Write(std::ostream& os, void* base){	return	base::Write(os, base);}	\
	void Read(std::istream& is, void* base){	return	base::Read(is, base);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_UTTypeDescDbIf(base)	\
	void RegisterDesc(Spr::UTTypeDescIf* n){	return	base::RegisterDesc(n);}	\
	void RegisterAlias(const char* src, const char* dest){	return	base::RegisterAlias(src, dest);}	\
	void SetPrefix(std::string p){	return	base::SetPrefix(p);}	\
	Spr::UTTypeDescIf* Find(std::string tn){	return	base::Find(tn);}	\
	void Link(Spr::UTTypeDescDbIf* db){	return	base::Link(db);}	\
	void LinkAll(){	base::LinkAll();}	\
	bool LinkCheck(){	return	base::LinkCheck();}	\
	void Print(std::ostream& os)const{	return	base::Print(os);}	\
	std::string GetGroup()const{	return	base::GetGroup();}	\
	void Clear(){	base::Clear();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_NameManagerIf(base)	\
	Spr::NamedObjectIf* FindObject(UTString name, UTString cls){	return	base::FindObject(name, cls);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_SceneIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_SdkIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_UTOptimizerIf(base)	\
	void SetDimension(int dimension){	return	base::SetDimension(dimension);}	\
	int GetDimension(){	return	base::GetDimension();}	\
	void SetInitialValue(const double* initialValue){	return	base::SetInitialValue(initialValue);}	\
	void Initialize(){	base::Initialize();}	\
	double* GetPopulation(){	return	base::GetPopulation();}	\
	void SetObjectiveFunctionValue(double value){	return	base::SetObjectiveFunctionValue(value);}	\
	void Next(){	base::Next();}	\
	bool IsFinished(){	return	base::IsFinished();}	\
	double* GetResult(){	return	base::GetResult();}	\
	double GetFitness(){	return	base::GetFitness();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_UTCMAESOptimizerIf(base)	\
	void SetInitialValue(const double* initialValue){	return	base::SetInitialValue(initialValue);}	\
	void SetInitialStdDev(const double* initialStdDev){	return	base::SetInitialStdDev(initialStdDev);}	\
	int GetCurrentGeneration(){	return	base::GetCurrentGeneration();}	\
	int GetCurrentPopulation(){	return	base::GetCurrentPopulation();}	\
	double GetCs(){	return	base::GetCs();}	\
	double GetLambda(){	return	base::GetLambda();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_UTPerformanceMeasureIf(base)	\
	const char* GetName(){	return	base::GetName();}	\
	int NCounter(){	return	base::NCounter();}	\
	const char* GetNameOfCounter(int id){	return	base::GetNameOfCounter(id);}	\
	std::string PrintAll(){	return	base::PrintAll();}	\
	std::string Print(std::string name){	return	base::Print(name);}	\
	std::string Print(int id){	return	base::Print(id);}	\
	void SetUnit(double u){	return	base::SetUnit(u);}	\
	double GetUnit(){	return	base::GetUnit();}	\
	double Time(int id){	return	base::Time(id);}	\
	double Time(const char* name){	return	base::Time(name);}	\
	Spr::UTLongLong& Count(const char* name){	return	base::Count(name);}	\
	Spr::UTLongLong& Count(int id){	return	base::Count(id);}	\
	int GetId(std::string name){	return	base::GetId(name);}	\
	int FindId(std::string name){	return	base::FindId(name);}	\
	int CreateId(std::string name){	return	base::CreateId(name);}	\
	void ClearCounts(){	base::ClearCounts();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_UTTimerIf(base)	\
	unsigned int GetID(){	return	base::GetID();}	\
	unsigned int GetResolution(){	return	base::GetResolution();}	\
	bool SetResolution(unsigned int r){	return	base::SetResolution(r);}	\
	unsigned int GetInterval(){	return	base::GetInterval();}	\
	bool SetInterval(unsigned int i){	return	base::SetInterval(i);}	\
	bool SetCallback(Spr::UTTimerIf::TimerFunc f, void* arg){	return	base::SetCallback(f, arg);}	\
	Spr::UTTimerIf::TimerFunc GetCallback(){	return	base::GetCallback();}	\
	void* GetCallbackArg(){	return	base::GetCallbackArg();}	\
	Spr::UTTimerIf::Mode GetMode(){	return	base::GetMode();}	\
	bool SetMode(Spr::UTTimerIf::Mode m){	return	base::SetMode(m);}	\
	bool IsStarted(){	return	base::IsStarted();}	\
	bool IsRunning(){	return	base::IsRunning();}	\
	bool Start(){	return	base::Start();}	\
	bool Stop(){	return	base::Stop();}	\
	void Call(){	base::Call();}	\

