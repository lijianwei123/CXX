#include <iostream>
#include <memory>

using namespace std;

using boost::shared_ptr;

class shared
{
private:
	shared_ptr<int> p;
public:
	shared(shared_ptr<int> p_): p(p_)
	{

	}
	void print()
	{
		cout << "count:" << p.use_count()
			<< "v=" << *p << endl;
	}
	void print_func(shared_ptr<int> p)
	{
		cout << "count:" << p.use_count()
			<< "v="	<< *p << endl;
	}
};

int main()
{
	shared_ptr<int> p(new int(100));
	shared s1(p), s2(p);

	s1.print();
	s2.print();

	*p = 20;
	print_func(p);

	s1.print();

}