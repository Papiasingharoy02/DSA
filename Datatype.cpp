#include<iostream>
using namespace std;

int main(){
    int a=123;
    cout<< a << endl;
    
    char ch='a';
    cout<< ch << endl;

    bool b=true;
    cout << b <<endl;

    float f=1.2;
    cout<< f<< endl;

    double d=1.23;
    cout<< d <<endl;

    cout<<"size of integer is: "<<sizeof(a) << endl;
    cout<<"size of character is: "<< sizeof(ch) << endl;
    cout<<"size of boolean is: "<< sizeof(b) <<endl;
    cout<<"size of floating point is: "<< sizeof(f) << endl;
    cout<<"size of double is: " << sizeof(d) << endl;

    unsigned u=101;
    cout<<u<<endl;
    
// typecasting character to integer
    int v='a';
    cout<<v<<endl;

// typecasting integer to character
    char c=110;
    cout<<c<<endl;

}

