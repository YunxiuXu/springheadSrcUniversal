#	Do not edit. RunSwig.py will update this file.
all:	FoundationStub.cpp

FoundationStub.cpp:	\
	..\..\include\Springhead.h\
	..\..\include\Base\Env.h\
	..\..\include\Base\BaseDebug.h\
	..\..\include\Foundation\SprObject.h\
	..\..\include\Foundation\SprScene.h\
	..\..\include\Foundation\SprUTCriticalSection.h\
	..\..\include\Foundation\SprUTOptimizer.h\
	..\..\include\Foundation\SprUTQPTimer.h\
	..\..\include\Foundation\SprUTTimer.h\
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
	..\Foundation\UTTypeDesc.h
	swig -I"D:\springheadSrcUniversal\core\bin\swig\Lib" -spr -w305,312,319,325,401,402 -DSWIG_Foundation -c++ Foundation.i
