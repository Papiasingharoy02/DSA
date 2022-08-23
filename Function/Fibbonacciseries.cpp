#include<iostream>
using namespace std;
int fib(int a, int b, int c,int n){

        for(int i=0;i<n;i++){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }  
        return c;
}


int main(){
    int a=0,b=1,c;
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    fib(a,b,c,n);
    return 0;
    
}