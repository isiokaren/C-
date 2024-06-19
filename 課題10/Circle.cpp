#include "Circle.h"

//コンストラクタ
Circle::Circle(void)
{
	PI = 3.141592;
}

float Circle::Menseki(float r)
{
	return r * r * PI;
}