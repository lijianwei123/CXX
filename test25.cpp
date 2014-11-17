#include <iostream>

using namespace std;

class test
{
public:
	test()
	{

	}

	virtual void t() = 0;

};

class test2 : public test
{
public:
	void t()
	{
		cout << __FUNCTION__ << endl;
	}
};


int main()
{
	test2 *obj2 = new test2();
	
	test *obj = (test *)obj2;
	obj->t();
	
	return 0;

}
