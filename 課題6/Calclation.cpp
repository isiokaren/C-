#include <iostream>
#include "Calclation.h"
//円の半径を取得する関数
void Calclation::SetA(float a)
{
	a = 42.195f;
}
//円の面積を計算する関数
void Calclation::SetB(float b)
{
	b = 3.14f;
}
//円の面積を出力する関数
void Calclation::Disp()
{
	std::cout << "42.195 + 3.14 =" << (a + b) << "\n";
	std::cout << "42.195 - 3.14 =" << (a - b) << "\n";
}