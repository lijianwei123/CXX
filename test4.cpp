#include <iostream>

using namespace std;

class A
{
	public:
		A(int b):a(b){}
		int a;
		~A();	
};

A::~A()
{
	cout << "finish" <<endl;
}


int main()
{
	A *o = new A(10);
	cout << o->a << endl;
	delete o;
	A a(10);
	cout << a.a << endl;
}
