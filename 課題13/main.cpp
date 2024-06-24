#include "Calculation.h"
//プロトタイプ宣言
void SetX(Calculation* x,float a, float b);
void SetY(Calculation* y,float a, float b);
//グローバル変数
Calculation x, y;
//メイン関数
int main()
{
	//インスタンスＸの処理
	Calculation* x = new Calculation;
	SetX(x,5.0, 10.0);
	x->Disp();
	delete x;
	//インスタンスＹの処理
	Calculation* y = new Calculation;
	SetY(y,8.0, 3.0);
	y->Disp();
	delete y;
}
//インスタンスＸのアクセス関数を呼ぶ
void SetX(Calculation* x, float a, float b)
{
	x->SetA(a);
	x->SetB(b);
}
//インスタンスＹのアクセス関数を呼ぶ
void SetY(Calculation* y, float a, float b)
{
	y->SetA(a);
	y->SetB(b);
}