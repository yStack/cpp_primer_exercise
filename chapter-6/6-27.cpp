#include <iostream>
#include <Sales_item.h>
#include <string>
#include <vector>
#include <iterator>
#include <pch.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int sum(std::initializer_list<int> input)
{
	int sum = 0;
	for (auto val : input)
	{
		sum += val;
	}
	return sum;
}


int main()
{
	int a = sum({1,2,3,4,5});

	return 0;
}
