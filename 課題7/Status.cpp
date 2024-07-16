#include "Status.h"
//レベル値を受け取る
void Status::SetLv(int i)
{
	lv = i;
}
//各パラメータを計算
void Status::Calc()
{
	hp = lv * lv + 50;
	atk = lv * 10;
	def = lv * 9;
}
//HP 値を返す
int Status::GetHp()
{
	return hp;
}
//攻撃力値を返す
int Status::GetAtk()
{
	return atk;
}
//防御力値を返す
int Status::GetDef()
{
	return def;
}
