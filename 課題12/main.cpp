#include "Sample.h"
//SampleClass�N���X�̃|�C���^
SampleClass *a;
	
int main()
{

	a = new SampleClass;

	a->Input();
	a->Plus();
	a->Disp();

	delete a;
}