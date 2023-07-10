#	Do not edit. RunSwig.py will update this file.
%module Collision
#define DOUBLECOLON ::
%include "../../include/Springhead.h"
%include "../../include/Base/Env.h"
%include "../../include/Base/BaseDebug.h"
%include "../../include/Foundation/SprObject.h"
%include "../../include/Foundation/SprScene.h"
%include "../../include/Foundation/SprUTCriticalSection.h"
%include "../../include/Foundation/SprUTOptimizer.h"
%include "../../include/Foundation/SprUTQPTimer.h"
%include "../../include/Foundation/SprUTTimer.h"
%include "../../include/Collision/SprCDDetector.h"
%include "../../include/Collision/SprCDShape.h"
%include "../../include/Collision/SprCDSpHash.h"
%include "../Foundation/ClapackLibsDef.h"
%include "../Foundation/Foundation.h"
%include "../Foundation/Object.h"
%include "../Foundation/Scene.h"
%include "../Foundation/UTBaseType.h"
%include "../Foundation/UTClapack.h"
%include "../Foundation/UTDllLoader.h"
%include "../Foundation/UTDllLoaderImpl.h"
%include "../Foundation/UTLoadContext.h"
%include "../Foundation/UTLoadHandler.h"
%include "../Foundation/UTOptimizer.h"
%include "../Foundation/UTPath.h"
%include "../Foundation/UTQPTimer.h"
%include "../Foundation/UTSocket.h"
%include "../Foundation/UTTimer.h"
%include "../Foundation/UTTypeDesc.h"
%include "../Collision/CDBox.h"
%include "../Collision/CDCapsule.h"
%include "../Collision/CDCollisionFunctions.h"
%include "../Collision/CDConvex.h"
%include "../Collision/CDConvexMesh.h"
%include "../Collision/CDConvexMeshInterpolate.h"
%include "../Collision/CDCutRing.h"
%include "../Collision/CDDetectorImp.h"
%include "../Collision/CDEllipsoid.h"
%include "../Collision/CDQuickHull2D.h"
%include "../Collision/CDQuickHull2DImp.h"
%include "../Collision/CDQuickHull3D.h"
%include "../Collision/CDQuickHull3DImp.h"
%include "../Collision/CDRoundCone.h"
%include "../Collision/CDShape.h"
%include "../Collision/CDSpatialHashTable.h"
%include "../Collision/CDSphere.h"
%include "../Collision/Collision.h"