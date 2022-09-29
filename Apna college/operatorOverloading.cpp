#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }

    void print(){
        cout<< real << "+" << imag << "i" << endl;
    }
};

int main(){

    Complex c1(5,4);
    Complex c2(2,3);
    int x = 5;
    int y = 4;
    int z = x+y;
    cout<<"value"<<z<<endl;
    return 0;
}