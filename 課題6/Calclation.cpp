#include <iostream>
#include "Calclation.h"
//�~�̔��a���擾����֐�
void Calclation::SetA(float a)
{
	a = 42.195f;
}
//�~�̖ʐς��v�Z����֐�
void Calclation::SetB(float b)
{
	b = 3.14f;
}
//�~�̖ʐς��o�͂���֐�
void Calclation::Disp()
{
	std::cout << "42.195 + 3.14 =" << (a + b) << "\n";
	std::cout << "42.195 - 3.14 =" << (a - b) << "\n";
}