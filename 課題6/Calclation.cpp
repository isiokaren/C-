#include <iostream>
#include "Calclation.h"
//円の半径を取得する関数
void Calclation::SetA(float a)
{
	this->a = a;
}
//円の面積を計算する関数
void Calclation::SetB(float b)
{
	this->b = b;
}
//円の面積を出力する関数
void Calclation::Disp()
{
	std::cout << a << "+" << b << "=" << (a + b) << "\n";
	std::cout << a << "-" << b << "=" << (a - b) << "\n";
}