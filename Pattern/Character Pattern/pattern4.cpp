#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=i+j-1+'A'-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}