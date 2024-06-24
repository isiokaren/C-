#include <iostream>
#include "Calculation.h"
//‰~‚Ì”¼Œa‚ğæ“¾‚·‚éŠÖ”
void Calculation::SetA(float a)
{
	this->a = a;
}
//‰~‚Ì–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void Calculation::SetB(float b)
{
	this->b = b;
}
//‰~‚Ì–ÊÏ‚ğo—Í‚·‚éŠÖ”
void Calculation::Disp()
{
	std::cout << a << "+" << b << "=" << (a + b) << "\n";
	std::cout << a << "-" << b << "=" << (a - b) << "\n";
}