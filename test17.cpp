#include <iostream>

using namespace std;

class Test
{
	public:
		~Test()
		{
			cout << "delete Test" << endl;
		}

};

class Test1 : public Test
{
	public:
		~Test1()
		{
			cout << "delete Test1" << endl;
		}
};


int main()
{
	Test1 t1;
	return 0;
}
