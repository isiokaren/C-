#include <iostream>
#include "Calclation.h"
//‰~‚Ì”¼Œa‚ğæ“¾‚·‚éŠÖ”
void Calclation::SetA()
{
	float a = 42.195f;
	float b = 3.14f;
}
//‰~‚Ì–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void Calclation::SetB()
{
	c1 = a + b;
	c2 = a - b;
}
//‰~‚Ì–ÊÏ‚ğo—Í‚·‚éŠÖ”
void Calclation::Disp()
{
	std::cout << a + b = c1 << "\n";
	std::cout << a + b = c2 << "\n";
}