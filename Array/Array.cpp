#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){

// declaration
    int num[15];
    // accessing
    cout<<"value of 15th index"<<num[14]<<endl;

    int sec[3]={3,7,5};
    cout<<"Value at 2 index "<<sec[2]<<endl;



    int third[15]={5,7,12};
    int n=15;
    printArray(third,15); //function call


    // for(int i=0;i<n;i++){

    //     cout<<third[i]<<" ";
    // }

    cout<<endl;

// initializing all indexes with 0
    int fourth[10]={0};
    n=10;

    int fourthsize=sizeof(fourth)/sizeof(int);
    cout<<"The size of fourth is: "<<fourthsize<<endl;

    // printArray(fourth,10);

    // for(int i=0;i<n;i++){

    //     cout<<fourth[i]<<" ";
    // }



    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;
    cout<<"The character array list look like------"<<endl;

    for(int i =0; i<5; i++){
        cout  << ch[i] << " ";
    }

// others array declaration in datatypes
    double d[5];
    float f[30];
    bool b[9];

    cout<<endl<<endl<< "EVERTHING IS FINE"<<endl<<endl;
    return 0;
}