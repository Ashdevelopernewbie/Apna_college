#include <iostream>
using namespace std;
int maximum(int a, int b);  //forward declaration

void printMessage(){
    cout<<"This is example of void function"<<endl;
}

int main(){
    
    /*
    int a,b;
    cout<<"Enter two numbers to find the greatest:"<<endl;
    cin>>a>>b;
    int c = maximum(a,b);   //funtion call
    cout<<"Greatest value is"<<c<<endl;
    cout<<"Another greatest value of 8 and 3 is "<<maximum(8,3)<<endl;
    */

    printMessage();

    return 0;
}

int maximum(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    } 
}