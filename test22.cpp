//验证c++ 方法是有方法名+参数类型确定方法唯一的
//g++ -g -Wall test22.cpp -o test22
#include <iostream>
#include <cstring>
#include "test22.h"

using namespace std;

void test::printName(string n)
{
	cout << n << endl;
}

int main()
{
	test t;
	t.printName(string("lijianwei"));		
	return 0;
}
