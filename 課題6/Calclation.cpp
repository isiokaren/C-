#include <iostream>
#include "Calclation.h"
//‰~‚Ì”¼Œa‚ğæ“¾‚·‚éŠÖ”
void Calclation::SetA(float a)
{
	a = 42.195f;
}
//‰~‚Ì–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void Calclation::SetB(float b)
{
	b = 3.14f;
}
//‰~‚Ì–ÊÏ‚ğo—Í‚·‚éŠÖ”
void Calclation::Disp()
{
	std::cout << "42.195 + 3.14 =" << (a + b) << "\n";
	std::cout << "42.195 - 3.14 =" << (a - b) << "\n";
}