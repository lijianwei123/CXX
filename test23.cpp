//boost  seriaztion使用
//g++ -g test23.cpp -lboost_serialization -o test23
//@see  http://www.ibm.com/developerworks/cn/aix/library/au-boostserialization/  这里有讲到非浸入式的
//@see  http://www.cnblogs.com/edwardlost/archive/2011/03/16/1984623.html
//@see  http://blog.csdn.net/zj510/article/details/8105408
//@see  http://www.cppblog.com/woaidongmao/archive/2008/10/19/64345.html

#include <iostream>
#include <sstream>


#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>



using namespace std;
using namespace boost;

class test
{
public:
	test()
	{

	}
	test(uint16_t status, string name)
	{
		_status = status;
		_name = name;
	}
	string getName() { return _name;}
private:
        friend class serialization::access;

        template<class Archive>
        void serialize(Archive &ar, const unsigned int version)
        {
                ar &_name;
		ar &_status;
        }
        string _name;
	uint16_t _status;
};


int main()
{
	test t(1, "lijianwei");
	ostringstream os;
	archive::binary_oarchive oa(os);
	oa << t;

	cout << os.str() << endl;

	istringstream is(os.str());
	archive::binary_iarchive ia(is);
	test t1;
	ia >> t1;
	cout << t1.getName() << endl;

	return 0;

}
