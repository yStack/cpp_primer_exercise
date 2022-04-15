#include <iostream>
#include <Sales_item.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string x = "abcdef,,123123,,sdfs,,,sdf,s,sdf,s..";
    string m;
    for (auto &c : x)
    {
        if (!ispunct(c))
        {
            m.append(1, c);
        }
    }
    cout << m << endl;
    return 0;
}