//验证拷贝构造函数
#include <iostream>
using namespace std;

class Test
{
private:
	int num;
public:
	Test(int num)
	{
		this->num = num;
	}

	Test & operator++()
	{
		num++;
		return *this;
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
	t2++;

	t1.printNum();
}