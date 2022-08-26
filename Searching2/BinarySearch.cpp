#include<iostream>
using namespace std;

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

int main(){

    int even[6]={ 2, 4, 6, 8, 12, 24};

    int odd[5]= {1,7,8,3,5};

    int evenindex = binarySearch(even, 6, 24);

    cout<<"Index of 24 is: "<< evenindex<< endl;

cout<<"index of odd number 7 is: "<<binarySearch(odd, 5, 7);

    return 0;
}