#include<iostream>
using namespace std;

bool Search(int arr[], int size, int key){


    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1; //if equal or found return 1 or true;
        }
    }
    return 0;


}

int main()
{
    int arr[10]={ 5, 7, -2, 22, 10, 0, 20, 1, 2, 8};

    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int found=Search(arr,10,key);
    if(found){
        cout<<"Key is present";

    }
    else{
        cout<<"Key is not present";
    }
    return 0;

}