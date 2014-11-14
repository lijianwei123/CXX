//验证delete 会不会调用析构函数 
//因为delete 对象后，对象生命周期结束，故会触发析构函数
// valgrind --tool=memcheck --leak-check=full ./test24
//验证了 delete只是free了对象本身占用的内存
#include <iostream>
#include <stdlib.h>


using namespace std;

class test
{
public:
	test()
	{

	}
	~test()
	{
		cout << "del" << endl;
	}
	char *name;

};


int main()
{
	test *p = new test();
	p->name = (char *)calloc(1, 100);
	delete p;
	cout << "lijianwei" << endl;
	return 0;
}
