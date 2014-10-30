//验证系统自带的hash_map
//@see  http://blog.csdn.net/wesleyluo/article/details/7046865
#include <iostream>

#include <ext/hash_map>
#define _CRT_SECURE_NO_DEPRECATE

using namespace __gnu_cxx;
using namespace std;

namespace __gnu_cxx
{
	template<> struct hash<string>
	{
		size_t operator()(const string& s) const
		{
			return __stl_hash_string(s.c_str());
		}
	};

}

int main(int argc, char *argv[])
{
	hash_map<string, int> hm;
	hm.insert(pair<string, int>(string("aaa"), 123));
	hash_map<string, int>::iterator it;
	it = hm.find(string("aaa"));
	cout << "value:" << it->second << endl;

	
	return 0;
}
