#include <iostream>
#include "Calculation.h"
//円の半径を取得する関数
void Calculation::SetA(float a)
{
	this->a = a;
}
//円の面積を計算する関数
void Calculation::SetB(float b)
{
	this->b = b;
}
//円の面積を出力する関数
void Calculation::Disp()
{
	std::cout << a << "+" << b << "=" << (a + b) << "\n";
	std::cout << a << "-" << b << "=" << (a - b) << "\n";
}