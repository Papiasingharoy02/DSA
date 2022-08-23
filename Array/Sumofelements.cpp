#include<iostream>
using namespace std;

int SumofElements(int arr[], int size){

    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    // cout<<sum;
    return sum;

}


int main()
{
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The sum is: "<<SumofElements(arr,n);
    return 0;
}