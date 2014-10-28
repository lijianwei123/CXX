#include <iostream>

using namespace std;

//验证private protected  publilc 继承

class Test
{
public:
	Test()
	{
		cout << "Test" << endl;
	}
private:
	int num;
};


class Test2 : public Test
{
public:
	Test2()
	{
		cout << "Test2" << endl;
	}
};


int main(int argc, char **argv)
{

	Test2 test2Obj;
}