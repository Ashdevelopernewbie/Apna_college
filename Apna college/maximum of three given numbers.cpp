#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = 4;
    b = 7;
    c = 2;
    if (a > b)
    {
        if(a > c)
        {
            cout << a;
        }
    else if (b > a)
    {
        if(b > c)
        {
            cout << c;
        }
    }
    else
    cout << c;
    }
    return 0;
}