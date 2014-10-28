#include <iostream>
#include <boost/smart_ptr.hpp>

int main()
{
	int *arr = new int[10];
	scoped_array<int> sa(arr);

	fill_n(&arr[0], 100, 5);
	sa[10] = sa[2] + sa[3];
}
