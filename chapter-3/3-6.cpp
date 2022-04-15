#include <iostream>
#include <Sales_item.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string x = "abcdef";

    for (auto &c : x)
    {
        c = 'A';
    }
    cout << x << endl;

    for (int i = 0; i < x.length(); i++)
    {
        x[i] = 'X';
    }

    cout << x << endl;
    return 0;
}