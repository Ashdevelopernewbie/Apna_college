#include <iostream>
using namespace std;

int main()
{
    int i;  //declaration
    i = 10; //inititalization

    cout << "The size of int is " << sizeof(i) << endl;

    float f;
    cout << "The size of float is " << sizeof(f) << endl;

    char c;
    cout << "The size of char is " << sizeof(c) << endl;

    bool b;
    cout << "The size of bool is " << sizeof(b) << endl;

    return 0;
}