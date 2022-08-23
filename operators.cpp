#include<iostream>
using namespace std;
int main(){

        int a= 2/5;      // int/int=int
        cout<<a<<endl;

        float f=2.5/5;    //float/int=float
        cout<<f<<endl;

        double d=1.23/5;   //double/int=double
        cout<<d<<endl;

        int b=3;
        int c=5;

        bool first = (a==b);
        cout<<first<<endl;

        bool second = (a>b);
        cout<<second<<endl;

        bool third = (a<b);
        cout<<third<<endl;

        bool fourth= (a>=b);
        cout<<fourth<<endl;

        bool fifth= (a<=b);
        cout<<fifth<<endl;

        bool sixth= (a!=b);
        cout<<sixth<<endl;


        int g=0;
        cout<< !g<<endl;
      
}