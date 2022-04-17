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


int compare(int val, int* p, int &max)
{
	max = val > *p ? val : *p;
	return 0;
}


int main()
{
	int a = 10;
	int b = 270;
	int max = 0;
	compare(a, &b, max);

	return 0;
}