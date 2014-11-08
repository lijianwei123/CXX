//g++ -g -Wall index.c -o index
#include <iostream>
#include <stdio.h>
#include <boost/make_shared.hpp>
#include <boost/shared_ptr.hpp>

#include <vector>

using namespace std;
using namespace boost;


int main(int argc, char *argv[])
{
	shared_ptr<vector<int> > spv = make_shared<vector<int> >(10, 2);

	return 0;
}
