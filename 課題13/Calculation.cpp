#include <iostream>
#include "Calculation.h"
//�~�̔��a���擾����֐�
void Calculation::SetA(float a)
{
	this->a = a;
}
//�~�̖ʐς��v�Z����֐�
void Calculation::SetB(float b)
{
	this->b = b;
}
//�~�̖ʐς��o�͂���֐�
void Calculation::Disp()
{
	std::cout << a << "+" << b << "=" << (a + b) << "\n";
	std::cout << a << "-" << b << "=" << (a - b) << "\n";
}