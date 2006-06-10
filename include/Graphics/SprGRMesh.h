/**	\addtogroup	gpGraphics	*/
//@{

#ifndef SPR_GRMesh_H
#define SPR_GRMesh_H

#include <Graphics/SprGRFrame.h>
#include <Springhead.h>

namespace Spr{;

///	@brief 表示用のMesh(GRMesh)のデスクリプタ．
struct GRMeshDesc{
	std::vector<Vec3f> positions;		///<	頂点の座標
	std::vector<Vec3f> normals;			///<	頂点の法線
	std::vector<Vec4f> colors;			///<	頂点の色
	std::vector<Vec2f> texCoords;		///<	テクスチャUV
	std::vector<size_t> faces;		///<	面を構成する頂点の番号．
};


/**	@brief	グラフィックスで使う表示用のMesh */
struct GRMeshIf: public GRVisualIf{
	IF_DEF(GRMesh);
};


//@}
}
#endif
