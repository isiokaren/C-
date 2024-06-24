#include "Sample.h"
//SampleClassクラスのポインタ
SampleClass *a;
	
int main()
{

	a = new SampleClass;

	a->Input();
	a->Plus();
	a->Disp();

	delete a;
}