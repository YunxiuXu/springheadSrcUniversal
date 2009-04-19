/** \page pageFWAppGLUI Frameworkを使ったGLUTアプリケーション

\contents

<div>
	<p>
		FWAppGLUIはFWAppGLUTの機能を持ちつつGLUIのGUI機能も考慮したアプリケーションを作成する事が出来るクラスです．
		面倒な処理はFWAppGLUTと同様SpringheadのFrameworkが全て処理してくれるため，
		自分で行う初期設定を少なくすることが可能です．
		なお，このクラスはオブジェクトを一つしか作る事が許されておりません．
		そのため，内部の設計はシングルトンパターンとなっています．
	</p>
	<h2>使い方</h2>
	<p>
in MYGUI.h
\verbatim

#include <Framework/SprFWAppGLUI.h>

class MYGUI : public FWAppGLUI{

public:
	GLUI* glui;
	// GUIに関する関数を必ずオーバーライドする
	void DesignGUI();
	
	// 必要に応じてFWAppGLUTの仮想関数をオーバーライドする．

public:
	// 自分で作ったメンバ関数を追加
private:
	// 自分で作ったメンバ関数やメンバ変数を追加
	static void __cdecl CallHoge(int control);
	void RealHoge(int control);
};
\endverbatim
	</p>
	<p>
in MYGUI.cpp
\verbatim

#include "MYGUI.h"

void MYGUI::DesignGUI(){
	glui = CreateGUI();
	new GLUI_Hoge(glui, ....., ..., CallHoge);
}

static void MYGUI::CallHoge(int control){
	((*MYGUI)instance)->RealHoge(control);
}
void MYGUI::RealHoge(int control){

}

//:::::::::::::::::::::::::::::::::::::::::
	// FWAppGLUTと同じ
//:::::::::::::::::::::::::::::::::::::::::
\endverbatim
	</p>

	<p>
in main.cpp
\verbatim

#include <Springhead.h>
#include "MYApp.h"

int main(int argc, char* argv[]){
	MYGUI gui;
	gui.Init(argc, argv);
	gui.Start();

	return 0;
}
\endverbatim
</div>

*/