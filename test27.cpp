#include <iostream>
#include <stdio.h>
using namespace std;


class test
{
public:
	int a;
};

int main()
{
	test t;
	t.a = 10;
	test t2 = t;

	printf("%d\n", t2.a);

	return 0;

}
