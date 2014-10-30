//验证一些预定义的宏
#include <iostream>

using namespace std;

int main()
{
	cout << "date:" << __DATE__ << "time:" << __TIME__ << endl;
	cout << "file:" << __FILE__ << "line:" << __LINE__ << "function:" << __FUNCTION__ << endl;
	return 0;
}
