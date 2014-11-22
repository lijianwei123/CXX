//g++ -g -Wall  test26.cpp -o test26
//output
//create
//1
//2
//delete

#include <iostream>

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

using namespace std;
using namespace boost;


class test
{
public:
	test()
	{
		cout << "create" << endl;
	}
	~test()
	{
		cout << "delete" << endl;
	}

};

int main()
{
	shared_ptr<test> test2_ptr;
	cout << test2_ptr.use_count() << endl;
	
	shared_ptr<test> test_ptr = make_shared<test>();
	cout << test_ptr.use_count() << endl;
	test2_ptr = test_ptr;	
	cout << test2_ptr.use_count() << endl;

	return 0;
	

}
