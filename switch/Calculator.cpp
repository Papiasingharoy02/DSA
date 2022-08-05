#include<iostream>
using namespace std;
int main(){
            
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    char op;
    cout<<"Enter the operation you want to perform: "<<endl;
    cin>>op;
    switch(op){
        case '+':
            cout<<"The answer is: "<<(a+b)<<endl;
            break;

        case '-':
            cout<<"The answer is: "<<(a-b)<<endl;
        break;

        case '*':
            cout<<"The answer is: "<<(a*b)<<endl;
            break;

        case '/':
            cout<<"The answer is: "<<(a/b)<<endl;
            break;

        case '%':
            cout<<"The answer is: "<<(a%b)<<endl;
            break;
            
        default:
            cout<<"Please enter a valid operation";
    }
    return 0;
}