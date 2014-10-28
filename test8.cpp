#include <iostream>
#include <memory>

using namespace std;

int main()
{
	string *p = new string("lijianwei");

	auto_ptr<string> ptr(p);

	cout << *p << endl;
}
