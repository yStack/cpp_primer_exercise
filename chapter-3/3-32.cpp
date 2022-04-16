#include <iostream>
#include <Sales_item.h>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	constexpr size_t t = 10;
	int ar[t] = {};

	for (int i = 0; i < t; i++)
	{
		ar[i] = i;
	}

	int b[t] = {0};
	for (int i = 0; i < t; i++)
	{
		b[i] = ar[i];
	}

	return 0;
}
