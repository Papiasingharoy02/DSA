#include<iostream>
using namespace std;

void setbit(int a, int b, int c, int count){

    
    while(a!=0 && b!=0){
        if(a & 1)
            c++;
        a=a>>1;
        if(b&1)
            count++;
        b=b>>1;
    }
    int result=c+count; 
    cout<<result;  
    
}


int main(){

    int a,b;
    int c=0,count=0;
    cout<<a<<b;
    cin>>a>>b;
    setbit(a,b,c,count);

    return 0;
}