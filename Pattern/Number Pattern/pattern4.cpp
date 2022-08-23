#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int c=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c<<" ";
            c=c+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}