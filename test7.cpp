#include <iostream>

using namespace std;

//验证private protected  publilc 继承

class Test
{
public:
	Test(int a):num(a)
	{
		cout << "Test" << endl;
	}
protected:
	int num;
};


class Test2 : public Test
{
public:
	Test2():Test(0)
	{

	}
	Test2(int a):Test(a)
	{
		cout << "Test2 one param" << endl;
		cout << "num:" << num << endl;
	}
};


int main(int argc, char **argv)
{

	Test2 test2Obj(20);
}
