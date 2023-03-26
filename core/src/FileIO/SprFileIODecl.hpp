#define SPR_OVERRIDEMEMBERFUNCOF_FIFileIf(base)	\
	bool Load(Spr::ObjectIfs& objs, const char* fn){	return	base::Load(objs, fn);}	\
	bool Save(const Spr::ObjectIfs& objs, const char* fn){	return	base::Save(objs, fn);}	\
	void SetImport(ImportIf* import){	return	base::SetImport(import);}	\
	ImportIf* GetImport(){	return	base::GetImport();}	\
	void SetDSTR(bool f){	return	base::SetDSTR(f);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FIFileSprIf(base)	\
	bool Load(Spr::ObjectIfs& objs, const char* fn){	return	base::Load(objs, fn);}	\
	bool Save(const Spr::ObjectIfs& objs, const char* fn){	return	base::Save(objs, fn);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FIFileXIf(base)	\
	bool Load(Spr::ObjectIfs& objs, const char* fn){	return	base::Load(objs, fn);}	\
	bool Save(const Spr::ObjectIfs& objs, const char* fn){	return	base::Save(objs, fn);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FIFileVRMLIf(base)	\
	bool Load(Spr::ObjectIfs& objs, const char* fn){	return	base::Load(objs, fn);}	\
	bool Save(const Spr::ObjectIfs& objs, const char* fn){	return	base::Save(objs, fn);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FIFileCOLLADAIf(base)	\
	bool Load(Spr::ObjectIfs& objs, const char* fn){	return	base::Load(objs, fn);}	\
	bool Save(const Spr::ObjectIfs& objs, const char* fn){	return	base::Save(objs, fn);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FIFileBinaryIf(base)	\
	bool Load(Spr::ObjectIfs& objs, const char* fn){	return	base::Load(objs, fn);}	\
	bool Save(const Spr::ObjectIfs& objs, const char* fn){	return	base::Save(objs, fn);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_ImportIf(base)	\
	void SetLoadOnly(bool on){	return	base::SetLoadOnly(on);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FIOpStateHandlerIf(base)	\
	void saveToFile(Spr::ObjectIf* objif, char* filename, float fileVersion){	return	base::saveToFile(objif, filename, fileVersion);}	\
	void loadFromFile(Spr::ObjectIf* objif, char* filename, bool checkName, float fileVersion){	return	base::loadFromFile(objif, filename, checkName, fileVersion);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_FISdkIf(base)	\
	Spr::FIFileXIf* CreateFileX(){	return	base::CreateFileX();}	\
	Spr::FIFileSprIf* CreateFileSpr(){	return	base::CreateFileSpr();}	\
	Spr::FIFileVRMLIf* CreateFileVRML(){	return	base::CreateFileVRML();}	\
	Spr::FIFileCOLLADAIf* CreateFileCOLLADA(){	return	base::CreateFileCOLLADA();}	\
	Spr::FIFileBinaryIf* CreateFileBinary(){	return	base::CreateFileBinary();}	\
	Spr::FIFileIf* CreateFile(const IfInfo* ii){	return	base::CreateFile(ii);}	\
	Spr::FIFileIf* CreateFileFromExt(UTString filename){	return	base::CreateFileFromExt(filename);}	\
	Spr::ImportIf* CreateImport(){	return	base::CreateImport();}	\
	Spr::ImportIf* CreateImport(Spr::ImportIf* parent, UTString path, Spr::ObjectIf* owner, const Spr::ObjectIfs& children){	return	base::CreateImport(parent, path, owner, children);}	\
	bool DelChildObject(Spr::ObjectIf* o){	return	base::DelChildObject(o);}	\
	void Clear(){	base::Clear();}	\

