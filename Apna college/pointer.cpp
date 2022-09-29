#include <iostream>
using namespace std;

int main(){
    int var = 5;
    int *ip;

    ip=&var;
    cout<<var<<endl;
    cout<<ip<<endl;
    cout<<*ip<<endl;

    *ip = 6;
    cout<<var<<endl;
    cout<<ip<<endl;
    cout<<*ip;
    return 0;
}