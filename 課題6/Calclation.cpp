#include <iostream>
#include "Calclation.h"
//�~�̔��a���擾����֐�
void Calclation::SetA()
{
	float a = 42.195f;
	float b = 3.14f;
}
//�~�̖ʐς��v�Z����֐�
void Calclation::SetB()
{
	c1 = a + b;
	c2 = a - b;
}
//�~�̖ʐς��o�͂���֐�
void Calclation::Disp()
{
	std::cout << a + b = c1 << "\n";
	std::cout << a + b = c2 << "\n";
}