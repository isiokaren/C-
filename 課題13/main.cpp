#include "Calculation.h"
//�v���g�^�C�v�錾
void SetX(Calculation* x,float a, float b);
void SetY(Calculation* y,float a, float b);
//�O���[�o���ϐ�
Calculation x, y;
//���C���֐�
int main()
{
	//�C���X�^���X�w�̏���
	Calculation* x = new Calculation;
	SetX(x,5.0, 10.0);
	x->Disp();
	delete x;
	//�C���X�^���X�x�̏���
	Calculation* y = new Calculation;
	SetY(y,8.0, 3.0);
	y->Disp();
	delete y;
}
//�C���X�^���X�w�̃A�N�Z�X�֐����Ă�
void SetX(Calculation* x, float a, float b)
{
	x->SetA(a);
	x->SetB(b);
}
//�C���X�^���X�x�̃A�N�Z�X�֐����Ă�
void SetY(Calculation* y, float a, float b)
{
	y->SetA(a);
	y->SetB(b);
}