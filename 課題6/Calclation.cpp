#include <iostream>
#include "Calclation.h"
//円の半径を取得する関数
void Calclation::SetA()
{
	float a = 42.195f;
	float b = 3.14f;
}
//円の面積を計算する関数
void Calclation::SetB()
{
	c1 = a + b;
	c2 = a - b;
}
//円の面積を出力する関数
void Calclation::Disp()
{
	std::cout << a + b = c1 << "\n";
	std::cout << a + b = c2 << "\n";
}