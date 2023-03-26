#define SPR_OVERRIDEMEMBERFUNCOF_GRBlendMeshIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRVisualIf(base)	\
	void Render(Spr::GRRenderIf* r){	return	base::Render(r);}	\
	void Rendered(Spr::GRRenderIf* r){	return	base::Rendered(r);}	\
	void Enable(bool on){	return	base::Enable(on);}	\
	bool IsEnabled(){	return	base::IsEnabled();}	\
	Spr::GRMaterialIf* GetMaterial(){	return	base::GetMaterial();}	\
	void SetMaterial(Spr::GRMaterialIf* mat){	return	base::SetMaterial(mat);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRFrameIf(base)	\
	Spr::GRFrameIf* GetParent(){	return	base::GetParent();}	\
	void SetParent(Spr::GRFrameIf* fr){	return	base::SetParent(fr);}	\
	int NChildren(){	return	base::NChildren();}	\
	Spr::GRVisualIf** GetChildren(){	return	base::GetChildren();}	\
	Affinef GetTransform(){	return	base::GetTransform();}	\
	Affinef GetWorldTransform(){	return	base::GetWorldTransform();}	\
	void SetTransform(const Affinef& af){	return	base::SetTransform(af);}	\
	bool CalcBBox(Vec3f& bbmin, Vec3f& bbmax, const Affinef& aff){	return	base::CalcBBox(bbmin, bbmax, aff);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRDummyFrameIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRAnimationIf(base)	\
	void BlendPose(float time, float weight){	return	base::BlendPose(time, weight);}	\
	void ResetPose(){	base::ResetPose();}	\
	void LoadInitialPose(){	base::LoadInitialPose();}	\
	Spr::GRAnimationKey GetAnimationKey(int n){	return	base::GetAnimationKey(n);}	\
	int NAnimationKey(){	return	base::NAnimationKey();}	\
	void DeletePose(float t){	return	base::DeletePose(t);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRAnimationSetIf(base)	\
	void BlendPose(float time, float weight){	return	base::BlendPose(time, weight);}	\
	void ResetPose(){	base::ResetPose();}	\
	void LoadInitialPose(){	base::LoadInitialPose();}	\
	Spr::ObjectIf* GetChildObject(size_t p){	return	base::GetChildObject(p);}	\
	void SetCurrentAnimationPose(float t){	return	base::SetCurrentAnimationPose(t);}	\
	void DeleteAnimationPose(float t){	return	base::DeleteAnimationPose(t);}	\
	float GetLastKeyTime(){	return	base::GetLastKeyTime();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRAnimationControllerIf(base)	\
	void BlendPose(UTString name, float time, float weight){	return	base::BlendPose(name, time, weight);}	\
	void ResetPose(){	base::ResetPose();}	\
	void LoadInitialPose(){	base::LoadInitialPose();}	\
	bool AddChildObject(Spr::ObjectIf* o){	return	base::AddChildObject(o);}	\
	bool DelChildObject(Spr::ObjectIf* o){	return	base::DelChildObject(o);}	\
	size_t NChildObject(){	return	base::NChildObject();}	\
	Spr::ObjectIf* GetChildObject(size_t p){	return	base::GetChildObject(p);}	\
	Spr::GRAnimationSetIf* GetAnimationSet(size_t p){	return	base::GetAnimationSet(p);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRSkinWeightIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRMeshIf(base)	\
	int NVertex(){	return	base::NVertex();}	\
	int NTriangle(){	return	base::NTriangle();}	\
	int NFace(){	return	base::NFace();}	\
	Vec3f* GetVertices(){	return	base::GetVertices();}	\
	Vec3f* GetNormals(){	return	base::GetNormals();}	\
	Vec4f* GetColors(){	return	base::GetColors();}	\
	Vec2f* GetTexCoords(){	return	base::GetTexCoords();}	\
	Spr::GRMeshFace* GetFaces(){	return	base::GetFaces();}	\
	Spr::GRMeshFace* GetFaceNormals(){	return	base::GetFaceNormals();}	\
	int* GetMaterialIndices(){	return	base::GetMaterialIndices();}	\
	void SwitchCoordinate(){	base::SwitchCoordinate();}	\
	void EnableTex3D(bool on){	return	base::EnableTex3D(on);}	\
	bool IsTex3D(){	return	base::IsTex3D();}	\
	Spr::GRSkinWeightIf* CreateSkinWeight(const Spr::GRSkinWeightDesc& desc){	return	base::CreateSkinWeight(desc);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRLightIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRMaterialIf(base)	\
	bool IsOpaque()const{	return	base::IsOpaque();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRCameraIf(base)	\
	Spr::GRFrameIf* GetFrame(){	return	base::GetFrame();}	\
	void SetFrame(Spr::GRFrameIf* fr){	return	base::SetFrame(fr);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRShadowLightIf(base)	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRRenderBaseIf(base)	\
	void SetViewport(Vec2f pos, Vec2f sz){	return	base::SetViewport(pos, sz);}	\
	Vec2f GetViewportPos(){	return	base::GetViewportPos();}	\
	Vec2f GetViewportSize(){	return	base::GetViewportSize();}	\
	void ClearBuffer(bool color, bool depth){	return	base::ClearBuffer(color, depth);}	\
	void SwapBuffers(){	base::SwapBuffers();}	\
	void GetClearColor(Vec4f& color){	return	base::GetClearColor(color);}	\
	void SetClearColor(const Vec4f& color){	return	base::SetClearColor(color);}	\
	void BeginScene(){	base::BeginScene();}	\
	void EndScene(){	base::EndScene();}	\
	void SetViewMatrix(const Affinef& afv){	return	base::SetViewMatrix(afv);}	\
	void GetViewMatrix(Affinef& afv){	return	base::GetViewMatrix(afv);}	\
	void SetProjectionMatrix(const Affinef& afp){	return	base::SetProjectionMatrix(afp);}	\
	void GetProjectionMatrix(Affinef& afp){	return	base::GetProjectionMatrix(afp);}	\
	void PushProjectionMatrix(){	base::PushProjectionMatrix();}	\
	void PopProjectionMatrix(){	base::PopProjectionMatrix();}	\
	void SetModelMatrix(const Affinef& afw){	return	base::SetModelMatrix(afw);}	\
	void GetModelMatrix(Affinef& afw){	return	base::GetModelMatrix(afw);}	\
	void MultModelMatrix(const Affinef& afw){	return	base::MultModelMatrix(afw);}	\
	void PushModelMatrix(){	base::PushModelMatrix();}	\
	void PopModelMatrix(){	base::PopModelMatrix();}	\
	void ClearBlendMatrix(){	base::ClearBlendMatrix();}	\
	void SetBlendMatrix(const Affinef& afb, unsigned int id){	return	base::SetBlendMatrix(afb, id);}	\
	void SetVertexFormat(const GRVertexElement* e){	return	base::SetVertexFormat(e);}	\
	void DrawDirect(Spr::GRRenderBaseIf::TPrimitiveType ty, void* vtx, size_t count, size_t stride){	return	base::DrawDirect(ty, vtx, count, stride);}	\
	void DrawIndexed(Spr::GRRenderBaseIf::TPrimitiveType ty, GLuint* idx, void* vtx, size_t count, size_t stride){	return	base::DrawIndexed(ty, idx, vtx, count, stride);}	\
	void DrawArrays(Spr::GRRenderBaseIf::TPrimitiveType ty, GRVertexArray* arrays, size_t count){	return	base::DrawArrays(ty, arrays, count);}	\
	void DrawArrays(Spr::GRRenderBaseIf::TPrimitiveType ty, size_t* idx, GRVertexArray* arrays, size_t count){	return	base::DrawArrays(ty, idx, arrays, count);}	\
	void DrawPoint(Vec3f p){	return	base::DrawPoint(p);}	\
	void DrawLine(Vec3f p0, Vec3f p1){	return	base::DrawLine(p0, p1);}	\
	void DrawSpline(Vec3f p0, Vec3f v0, Vec3f p1, Vec3f v1, int ndiv){	return	base::DrawSpline(p0, v0, p1, v1, ndiv);}	\
	void DrawArrow(Vec3f p0, Vec3f p1, float rbar, float rhead, float lhead, int slice, bool solid){	return	base::DrawArrow(p0, p1, rbar, rhead, lhead, slice, solid);}	\
	void DrawBox(float sx, float sy, float sz, bool solid){	return	base::DrawBox(sx, sy, sz, solid);}	\
	void DrawSphere(float radius, int slices, int stacks, bool solid){	return	base::DrawSphere(radius, slices, stacks, solid);}	\
	void DrawEllipsoid(Vec3f radius, int slices, int stacks, bool solid){	return	base::DrawEllipsoid(radius, slices, stacks, solid);}	\
	void DrawCone(float radius, float height, int slice, bool solid){	return	base::DrawCone(radius, height, slice, solid);}	\
	void DrawCylinder(float radius, float height, int slice, bool solid, bool cap){	return	base::DrawCylinder(radius, height, slice, solid, cap);}	\
	void DrawDisk(float radius, int slice, bool solid){	return	base::DrawDisk(radius, slice, solid);}	\
	void DrawCapsule(float radius, float height, int slice, bool solid){	return	base::DrawCapsule(radius, height, slice, solid);}	\
	void DrawRoundCone(float rbottom, float rtop, float height, int slice, bool solid){	return	base::DrawRoundCone(rbottom, rtop, height, slice, solid);}	\
	void DrawGrid(float size, int slice, float lineWidth){	return	base::DrawGrid(size, slice, lineWidth);}	\
	void DrawCurve(const Curve3f& curve){	return	base::DrawCurve(curve);}	\
	int StartList(){	return	base::StartList();}	\
	void EndList(){	base::EndList();}	\
	void DrawList(int i){	return	base::DrawList(i);}	\
	void ReleaseList(int i){	return	base::ReleaseList(i);}	\
	void SetFont(const Spr::GRFont& font){	return	base::SetFont(font);}	\
	void DrawFont(Vec2f pos, const std::string str){	return	base::DrawFont(pos, str);}	\
	void DrawFont(Vec3f pos, const std::string str){	return	base::DrawFont(pos, str);}	\
	void SetMaterial(const Spr::GRMaterialDesc& mat){	return	base::SetMaterial(mat);}	\
	void SetMaterial(const Spr::GRMaterialIf* mat){	return	base::SetMaterial(mat);}	\
	void SetMaterial(int matname){	return	base::SetMaterial(matname);}	\
	void SetMaterial(int matname, float alpha){	return	base::SetMaterial(matname, alpha);}	\
	void SetPointSize(float sz, bool smooth){	return	base::SetPointSize(sz, smooth);}	\
	void SetLineWidth(float w, bool smooth){	return	base::SetLineWidth(w, smooth);}	\
	void PushLight(const Spr::GRLightDesc& light){	return	base::PushLight(light);}	\
	void PushLight(const Spr::GRLightIf* light){	return	base::PushLight(light);}	\
	void PopLight(){	base::PopLight();}	\
	int NLights(){	return	base::NLights();}	\
	void SetDepthWrite(bool b){	return	base::SetDepthWrite(b);}	\
	void SetDepthTest(bool b){	return	base::SetDepthTest(b);}	\
	void SetDepthFunc(Spr::GRRenderBaseIf::TDepthFunc f){	return	base::SetDepthFunc(f);}	\
	void SetAlphaTest(bool b){	return	base::SetAlphaTest(b);}	\
	void SetAlphaMode(Spr::GRRenderBaseIf::TBlendFunc src, Spr::GRRenderBaseIf::TBlendFunc dest){	return	base::SetAlphaMode(src, dest);}	\
	void SetLighting(bool l){	return	base::SetLighting(l);}	\
	void SetTexture2D(bool b){	return	base::SetTexture2D(b);}	\
	void SetTexture3D(bool b){	return	base::SetTexture3D(b);}	\
	unsigned int LoadTexture(const std::string filename){	return	base::LoadTexture(filename);}	\
	void SetTextureImage(const std::string id, int components, int xsize, int ysize, int format, const char* tb){	return	base::SetTextureImage(id, components, xsize, ysize, format, tb);}	\
	void SetBlending(bool b){	return	base::SetBlending(b);}	\
	GRShaderIf* CreateShader(const GRShaderDesc& sd){	return	base::CreateShader(sd);}	\
	bool SetShader(GRShaderIf* shader){	return	base::SetShader(shader);}	\
	void SetShadowLight(const Spr::GRShadowLightDesc& sld){	return	base::SetShadowLight(sld);}	\
	void EnterShadowMapGeneration(){	base::EnterShadowMapGeneration();}	\
	void LeaveShadowMapGeneration(){	base::LeaveShadowMapGeneration();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRRenderIf(base)	\
	void SetDevice(Spr::GRDeviceIf* dev){	return	base::SetDevice(dev);}	\
	Spr::GRDeviceIf* GetDevice(){	return	base::GetDevice();}	\
	void SetCamera(const Spr::GRCameraDesc& cam){	return	base::SetCamera(cam);}	\
	const Spr::GRCameraDesc& GetCamera(){	return	base::GetCamera();}	\
	void Reshape(Vec2f pos, Vec2f screenSize){	return	base::Reshape(pos, screenSize);}	\
	Vec2f GetPixelSize(){	return	base::GetPixelSize();}	\
	Vec4f GetReservedColor(int matname){	return	base::GetReservedColor(matname);}	\
	Vec3f ScreenToCamera(int x, int y, float depth, bool LorR){	return	base::ScreenToCamera(x, y, depth, LorR);}	\
	void EnterScreenCoordinate(){	base::EnterScreenCoordinate();}	\
	void LeaveScreenCoordinate(){	base::LeaveScreenCoordinate();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRDeviceIf(base)	\
	void Init(){	base::Init();}	\
	void Print(std::ostream& os)const{	return	base::Print(os);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRDeviceGLIf(base)	\
	bool CheckGLVersion(int major, int minor){	return	base::CheckGLVersion(major, minor);}	\
	int GetGLMajorVersion(){	return	base::GetGLMajorVersion();}	\
	int GetGLMinorVersion(){	return	base::GetGLMinorVersion();}	\
	void SetGLVersion(int major, int minor){	return	base::SetGLVersion(major, minor);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRSceneIf(base)	\
	void Render(Spr::GRRenderIf* r){	return	base::Render(r);}	\
	Spr::GRFrameIf* GetWorld(){	return	base::GetWorld();}	\
	Spr::GRCameraIf* GetCamera(){	return	base::GetCamera();}	\
	void SetCamera(const Spr::GRCameraDesc& desc){	return	base::SetCamera(desc);}	\
	Spr::GRAnimationControllerIf* GetAnimationController(){	return	base::GetAnimationController();}	\
	Spr::GRVisualIf* CreateVisual(const IfInfo* info, const Spr::GRVisualDesc& desc, Spr::GRFrameIf* parent){	return	base::CreateVisual(info, desc, parent);}	\
	Spr::GRSdkIf* GetSdk(){	return	base::GetSdk();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRSdkIf(base)	\
	Spr::GRRenderIf* CreateRender(){	return	base::CreateRender();}	\
	Spr::GRDeviceGLIf* CreateDeviceGL(){	return	base::CreateDeviceGL();}	\
	Spr::GRSceneIf* CreateScene(const Spr::GRSceneDesc& desc){	return	base::CreateScene(desc);}	\
	Spr::GRSceneIf* GetScene(size_t i){	return	base::GetScene(i);}	\
	size_t NScene(){	return	base::NScene();}	\
	void MergeScene(Spr::GRSceneIf* scene0, Spr::GRSceneIf* scene1){	return	base::MergeScene(scene0, scene1);}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRShaderIf(base)	\
	int GetProgramID(){	return	base::GetProgramID();}	\

#define SPR_OVERRIDEMEMBERFUNCOF_GRSphereIf(base)	\

