#include<iostream>
using namespace std;

bool isEven(int n){

// odd
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cout<<"Enter the checking number: ";
    cin>>n;
    if(isEven(n)){
        cout<<"The number is even"<<endl;
    } 
    else{
        cout<<"The number is odd"<<endl;
    }
    return 0;
}