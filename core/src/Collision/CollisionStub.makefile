#	Do not edit. RunSwig.py will update this file.
all:	CollisionStub.cpp

CollisionStub.cpp:	\
	..\..\include\Springhead.h\
	..\..\include\Base\Env.h\
	..\..\include\Base\BaseDebug.h\
	..\..\include\Foundation\SprObject.h\
	..\..\include\Foundation\SprScene.h\
	..\..\include\Foundation\SprUTCriticalSection.h\
	..\..\include\Foundation\SprUTOptimizer.h\
	..\..\include\Foundation\SprUTQPTimer.h\
	..\..\include\Foundation\SprUTTimer.h\
	..\..\include\Collision\SprCDDetector.h\
	..\..\include\Collision\SprCDShape.h\
	..\..\include\Collision\SprCDSpHash.h\
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
	..\Collision\CDBox.h\
	..\Collision\CDCapsule.h\
	..\Collision\CDCollisionFunctions.h\
	..\Collision\CDConvex.h\
	..\Collision\CDConvexMesh.h\
	..\Collision\CDConvexMeshInterpolate.h\
	..\Collision\CDCutRing.h\
	..\Collision\CDDetectorImp.h\
	..\Collision\CDEllipsoid.h\
	..\Collision\CDQuickHull2D.h\
	..\Collision\CDQuickHull2DImp.h\
	..\Collision\CDQuickHull3D.h\
	..\Collision\CDQuickHull3DImp.h\
	..\Collision\CDRoundCone.h\
	..\Collision\CDShape.h\
	..\Collision\CDSpatialHashTable.h\
	..\Collision\CDSphere.h\
	..\Collision\Collision.h
	swig -I"D:\springheadSrcUniversal\core\bin\swig\Lib" -spr -w305,312,319,325,401,402 -DSWIG_Collision -c++ Collision.i
