#include "Status.h"
//���x���l���󂯎��
void Status::SetLv(int i)
{
	lv = i;
}
//�e�p�����[�^���v�Z
void Status::Calc()
{
	hp = lv * lv + 50;
	atk = lv * 10;
	def = lv * 9;
}
//HP �l��Ԃ�
int Status::GetHp()
{
	return hp;
}
//�U���͒l��Ԃ�
int Status::GetAtk()
{
	return atk;
}
//�h��͒l��Ԃ�
int Status::GetDef()
{
	return def;
}
