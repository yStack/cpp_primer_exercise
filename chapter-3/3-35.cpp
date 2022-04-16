#include <iostream>
#include <Sales_item.h>
#include <string>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int data[] = { 1,2,3,4,5,6,7 };
	int *b = std::begin(data);
	int *e = std::end(data);
	for (auto a = b; a != e; ++a)
	{
		*a = 0;
	}

	return 0;
}
