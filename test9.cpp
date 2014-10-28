#include <iostream>

using namespace std;

class Test
{


};

class Test2 : public Test
{
	public:
		Test2(int num)
		{
			cout << num << endl;

		}

};



int main()
{
	Test2 a(10);
	return 0;
}
