#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){

    int start=0,end=n-1;
    int mid=start +(end - start)/2;
    int ans = -1;
    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end= mid-1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end=mid - 1;
        }
      mid=start +(end - start)/2;  
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){

    int start=0,end=n-1;
    int mid=start +(end - start)/2;
    int ans=-1;
    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start= mid+1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end=mid - 1;
        }
      mid=start +(end - start)/2;  
    }
    return ans;
}

int main(){

    int arr[6]={1,6,8,8,9,1};
    cout<<"last occurance of 8 at index: "<<firstOcc(arr,4,8);
    cout<<endl;
    cout<<"last occurance of 8 at index: "<<lastOcc(arr,6,8);
    return 0;

}
