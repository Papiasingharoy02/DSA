#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the range: ";
    cin >> n;
    int i=1;
    while(i<=n){

        int j=1;
        while(j<=(n-i+1)){
            cout<<j;
            j=j+1;
        }
        int k=1;
        while(k<(2*i-1)){
            cout<<"*";
            k=k+1;
        }
        int v=n-i+1;
        while(v){
            cout<<v;
            v--;
        }
        cout<<endl;
        i=i+1;
    }
}