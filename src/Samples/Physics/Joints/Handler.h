#ifndef JOINTS_HANDLER_H
#define JOINTS_HANDLER_H

#include "../../SampleApp.h"

/// シーンの構築とインタラクションの基本クラス
class Handler : public UTRefCount{
public:
	enum {
		MENU_CHAIN = SampleApp::MENU_SCENE,
		MENU_LINK,
		MENU_ARM,
	};
	
	PHSolidDesc		sdFloor;					///< 床剛体のディスクリプタ
	PHSolidDesc		sdBox;						///< 箱剛体のディスクリプタ

	PHSolidIf*					soFloor;		///< 床剛体のインタフェース
	std::vector<PHSolidIf*>		soBox;			///< 箱剛体のインタフェース
	std::vector<PHJointIf*>		jntLink;		///< 関節のインタフェース
	std::vector<PHTreeNodeIf*>	nodeTree;		///< ABA（関節座標シミュレーション）のためのツリーノード

public:
	Handler(){}

	SampleApp*	GetApp(){ return (SampleApp*)FWApp::instance; }
	FWSdkIf*	GetFWSdk(){ return FWApp::instance->GetSdk(); }
	PHSdkIf*	GetPHSdk(){ return GetFWSdk()->GetPHSdk(); }
	FWSceneIf*	GetFWScene(){ return GetFWSdk()->GetScene(); }
	PHSceneIf*	GetPHScene(){ return GetFWScene()->GetPHScene(); }
	
	virtual void BuildScene(){}
	virtual void OnAction(int id){}
	virtual void OnStep(){}
	virtual void OnDraw(GRRenderIf* render){}
	
};

#endif