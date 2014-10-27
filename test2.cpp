#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string str = "shiyang";
	vector<string> vecstr;
	vecstr.push_back(str);
	vector<string>::iterator iter = vecstr.begin();
	cout << *iter <<endl;
	return 0;


}