#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector <int> arr, int n, int m, int mid){

    int studentCount = 1;

    int pageSum = 0;

    for(int i=0;i<n;i++){

        if( pageSum + arr[i] <= mid){
            pageSum+=arr[i];
        }
        
        else{
            studentCount++;

            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;

}

int bookAllocate(vector <int> arr, int n, int m){

    int s =0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum; // each value of arr sum is end
    int ans =-1;
    int mid= s + (e-s)/2;
    
    while(s<=e){
        if(isPossible(arr,n,m,mid) ){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    mid= s + (e-s)/2;
    }
    return ans;

}



int main(){
    int arr[4]={12,34,67,90};
    cout<<"Answer is: "<< bookAllocate(arr, 4, 2);
    return 0;
    }