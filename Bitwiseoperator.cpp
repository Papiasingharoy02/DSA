#include<iostream>
using namespace std;
int main(){

    int a=4;
    int b=6;
    cout<< "a&b "<< (a&b) <<endl;
    cout<< "a|b "<< (a|b) <<endl;
    cout<< "~a "<< (~a) <<endl;
    cout<< "~b " << (~b) << endl;
    cout<< "a^b "<< (a^b) <<endl;

// left & right shift
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

// increment-decrement operator

    int i=7;
    cout<< (++i)<<endl;
    // 8
    cout<< (i++) <<endl;
    // 8 , 8+1=9
    cout<< (i--) <<endl;
    // 9, 9-1=8
    cout<< (--i) <<endl;
    7


//    int a=1;
//    int b=2;
//    if(a-- > 0 && ++b > 2){
//     cout<<"stage 1 -Inside If";
//    }
//    else{
//     cout<<"stage 2 -Inside else"<<endl;
//    }
//    cout << a << " " << b << endl;


// int a=1;
// int b=a++;
// int c=++a;
// cout<<b;
// cout<<c;


    // int n=3;
    // cout<< (25 * (++n));
    return 0;
}