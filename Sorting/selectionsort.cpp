#include<iostream>
using namespace std;

void swap(int *i, int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout <<arr[i] <<" ";
    }
    cout<<endl;
}

void SelectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }

}

int main(){
    int arr[6]={ 5, 3, 8, 1, 6, 9};
    SelectionSort(arr,6);
    cout<<"After Sorting the array: ";
    printArray(arr,6);
    return 0;
}