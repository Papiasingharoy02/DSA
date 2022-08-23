#include<iostream>
using namespace std;

void count(int n){

    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the range:";
    cin>>n;
    count(n);
    return 0;
}