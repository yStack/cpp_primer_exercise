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


int change(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}


int main()
{
	int a = 10;
	int b = 270;
	change(&a, &b);

	return 0;
}
