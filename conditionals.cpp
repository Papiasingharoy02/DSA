#include<iostream>
using namespace std;
int main(){


    int a;
    cin>>a;

    // if block
    if(a>0){
        cout<<"a is positive"<<endl;
    }
    else{
        cout<<"a is negetive"<<endl;
    }

// if else block
    int b,c;
    cin>>b>>c;
    cout<<"The value of b and c: "<<b<<" "<<c<<endl;
    if(a>b){
        cout<<"a is greater"<<endl;
    }
    if(b>a){
        cout<<"b is greater"<<endl;
    }

// if else if block
    int a;
    cout<<"Enter the a: ";
    cin>>a;
    if(a>0){
        cout<<"a is positive number"<<endl;
    }
    else if(a<0){
        cout<<"a is negetive number"<<endl;
    }
    else{
        cout<<"a is zero"<<endl;
    }



int a=2;
int b=a+1;
if((a=3)==b){
    cout<<a;
}
else{
    cout<<a+1;
}




return 0;
}