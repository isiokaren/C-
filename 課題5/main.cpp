#include <iostream>
#include "Data.h"
//メイン関数
int main() {
	//変数�@に適当な値を代入させる
	int i;
	std::cin >> i;
	//Data クラスのインスタンスを作る
	Data x;
	//メンバ関数を呼び出す
	x.SetValue(i); //変数�@の値を渡す（アクセス関数）
	x.Disp(); //表示する
}

//データメンバへの直接アクセスを制限し、データメンバの一貫性や安全性を保つために必要