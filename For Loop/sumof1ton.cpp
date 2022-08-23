#include<iostream>
using  namespace std;
int main(){

        int n,sum=0;
        cout<<"Enter the range: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            sum+=i;
           
        }

     cout<<sum<<endl;
    return 0;
}