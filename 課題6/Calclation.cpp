#include <iostream>
#include "Calclation.h"
//�~�̔��a���擾����֐�
void Calclation::SetA(float a)
{
	this->a = a;
}
//�~�̖ʐς��v�Z����֐�
void Calclation::SetB(float b)
{
	this->b = b;
}
//�~�̖ʐς��o�͂���֐�
void Calclation::Disp()
{
	std::cout << a << "+" << b << "=" << (a + b) << "\n";
	std::cout << a << "-" << b << "=" << (a - b) << "\n";
}