#include <iostream>
#include "Calclation.h"
//‰~‚Ì”¼Œa‚ğæ“¾‚·‚éŠÖ”
void Calclation::SetA(float a)
{
	this->a = a;
}
//‰~‚Ì–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void Calclation::SetB(float b)
{
	this->b = b;
}
//‰~‚Ì–ÊÏ‚ğo—Í‚·‚éŠÖ”
void Calclation::Disp()
{
	std::cout << a << "+" << b << "=" << (a + b) << "\n";
	std::cout << a << "-" << b << "=" << (a - b) << "\n";
}