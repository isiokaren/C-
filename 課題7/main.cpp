#include <iostream>
#include "Status.h"
int main()
{
	int lv;
	Status st;
	std::cout << "���x������́�";
	std::cin >> lv;
	st.SetLv(lv);
	st.Calc();

	std::cout << " �g�o = " << st.GetHp() << "\n";
	std::cout << "�U����= " << st.GetAtk() << "\n";
	std::cout << "�h���= " << st.GetDef() << "\n";
}