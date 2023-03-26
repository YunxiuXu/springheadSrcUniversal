#	Do not edit. RunSwig.py will update this file.
all:	GraphicsStub.cpp

GraphicsStub.cpp:	\
	..\..\include\Springhead.h\
	..\..\include\Base\Env.h\
	..\..\include\Base\BaseDebug.h\
	..\..\include\Foundation\SprObject.h\
	..\..\include\Foundation\SprScene.h\
	..\..\include\Foundation\SprUTCriticalSection.h\
	..\..\include\Foundation\SprUTOptimizer.h\
	..\..\include\Foundation\SprUTQPTimer.h\
	..\..\include\Foundation\SprUTTimer.h\
	..\..\include\Graphics\SprGRBlendMesh.h\
	..\..\include\Graphics\SprGRFrame.h\
	..\..\include\Graphics\SprGRMesh.h\
	..\..\include\Graphics\SprGRRender.h\
	..\..\include\Graphics\SprGRScene.h\
	..\..\include\Graphics\SprGRSdk.h\
	..\..\include\Graphics\SprGRShader.h\
	..\..\include\Graphics\SprGRSphere.h\
	..\..\include\Graphics\SprGRVertex.h\
	..\Foundation\ClapackLibsDef.h\
	..\Foundation\Foundation.h\
	..\Foundation\Object.h\
	..\Foundation\Scene.h\
	..\Foundation\UTBaseType.h\
	..\Foundation\UTClapack.h\
	..\Foundation\UTDllLoader.h\
	..\Foundation\UTDllLoaderImpl.h\
	..\Foundation\UTLoadContext.h\
	..\Foundation\UTLoadHandler.h\
	..\Foundation\UTOptimizer.h\
	..\Foundation\UTPath.h\
	..\Foundation\UTQPTimer.h\
	..\Foundation\UTSocket.h\
	..\Foundation\UTTimer.h\
	..\Foundation\UTTypeDesc.h\
	..\Graphics\Graphics.h\
	..\Graphics\GRBlendMesh.h\
	..\Graphics\GRDeviceGL.h\
	..\Graphics\GRDrawEllipsoid.h\
	..\Graphics\GRFrame.h\
	..\Graphics\GRLoadBmp.h\
	..\Graphics\GRMesh.h\
	..\Graphics\GRRender.h\
	..\Graphics\GRScene.h\
	..\Graphics\GRSdk.h\
	..\Graphics\GRSphere.h
	swig -I"D:\springheadSrcUniversal\core\bin\swig\Lib" -spr -w305,312,319,325,401,402 -DSWIG_Graphics -c++ Graphics.i
