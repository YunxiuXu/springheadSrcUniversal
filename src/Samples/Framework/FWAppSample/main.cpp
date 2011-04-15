/**
\page pageFWAppSample フレームワークSDKを使った一番簡単なサンプル
 Springhead2/src/Samples/FWAppSample

- プログラムの機能
 - 床の上に箱が載っているだけのシーン。
 - 描画は \ref pagePhysics のデバッグ表示のみ。
 - d キーで、接触力や接触部情報の表示のON/OFF。
- ソースについて
 - シーンの構築は、C++言語でAPIを呼び出して行う。
 - \ref pageFramework と \ref pagePhysics のみを使用
*/

//#define SIMPLEST_APP
#ifdef SIMPLEST_APP
#include <Springhead.h>
#include <Framework/SprFWApp.h>
using namespace Spr;

class MyApp : public FWApp{
public:
	virtual void Init(int argc = 0, char* argv[] = 0){
		FWApp::Init(argc, argv);

		PHSdkIf* phSdk = GetSdk()->GetPHSdk();
		PHSceneIf* phscene = GetSdk()->GetScene()->GetPHScene();
		CDBoxDesc bd;
		
		// 床を作成
		PHSolidIf* floor = phscene->CreateSolid();
		floor->SetDynamical(false);
		bd.boxsize = Vec3f(5.0f, 1.0f, 5.0f);
		floor->AddShape(phSdk->CreateShape(bd));
		floor->SetFramePosition(Vec3d(0, -1.0, 0));
	
		// 箱を作成
		PHSolidIf* box = phscene->CreateSolid();
		bd.boxsize = Vec3f(0.2f, 0.2f, 0.2f);
		box->AddShape(phSdk->CreateShape(bd));
		box->SetFramePosition(Vec3d(0.0, 1.0, 0.0));

		GetSdk()->SetDebugMode(true);
	}
} app;
#else
#include "FWAppSample.h"
FWAppSample app;
#endif

int main(int argc, char* argv[]){
	app.Init(argc, argv);
	app.StartMainLoop();
	return 0;
}
