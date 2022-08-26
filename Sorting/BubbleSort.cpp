#include<iostream>
using namespace std;

void swap(int *a, int *b){   
    int temp=*a; //temp=10, a=10 ,b =5
    *a=*b; //b value transfered to a
    *b=temp;  // temp value that is actually a's value transfered to b;

}

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}


void BubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}



int main(){

    int n;
    int arr[100];
    cout<<"Enter the range: ";
    cin>>n;
    cout<<"The array is now: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Printing the Sorted array: ";
    BubbleSort(arr,6);
    printArray(arr,6);
    return 0;
}