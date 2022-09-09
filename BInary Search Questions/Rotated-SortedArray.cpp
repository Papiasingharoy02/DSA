#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s=0, e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){

        if(arr[mid]>= arr[0]){
            s= mid+1;
        }
        else{
            e = mid;
        }
    mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int n, int key){

    int start=0, end=n-1;
    int mid = start + (end-start)/2;
    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int findPosition(int arr[], int n, int m){

    int pivot= getPivot(arr,n);

    if(m>= arr[pivot && m<= arr[n-1]])
        {
            return binarySearch(arr, pivot, n-1, m);
        }
    else{
        return binarySearch(arr, 0, pivot-1, m);
    }
    
}

int main(){

    int arr[5]={8,9,1,2,3};
    cout<< "Answer is: "<<findPosition(arr,5,1);
    return 0;
}