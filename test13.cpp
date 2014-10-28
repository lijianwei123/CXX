//验证拷贝构造函数
//验证操作符重载
#include <iostream>
using namespace std;

class Test
{
private:
	int num;
public:
	Test()
	{
	}
	Test(int num): num(num)
	{
	}

	Test& operator ++()
	{
		++num;
		return *this;
	}
	
	Test operator +(const Test &t1)
	{
		return Test(num + t1.num);
	}

	void printNum()
	{
		cout << "num:" << num << endl;
	}
};



int main()
{
	Test t1(10);
	Test t2 = t1;
	Test t3;//说明如果定义了构造函数，系统不会再提供默认的无参构造函数
	t3 = t1 + t2;
	++t2;

	t1.printNum();
	t3.printNum();
}
