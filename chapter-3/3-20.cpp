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
	int data[] = { 1, 2, 3, 4, 10, 6, 7, 8, 9 };
	vector<int> vec;
	for (auto d : data)
	{
		vec.push_back(d);
	}

	int length = vec.size();
	int c = length / 2;
	int f = length % 2;
	if (length % 2 == 1)
	{
		c = c + 1;
	}

	vector<int> result;
	for (int i = 0; i < c; ++i)
	{
		int head = i;
		int tail = vec.size() - 1 - i;
		int sum = vec[head] + vec[tail];
		result.push_back(sum);
	}

	return 0;
}
