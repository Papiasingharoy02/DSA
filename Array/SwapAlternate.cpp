#include<iostream>
using namespace std;

void PrintArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
void swapAlternate(int arr[], int n){

    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main()
{

    int even[6]={2, 6, 44, 8, 20, 17};
    int odd[5]={1, 3, 5, 7, 27};

    swapAlternate(even,6);
    PrintArray(even,6);

    cout<<endl;

    swapAlternate(odd,5);
    PrintArray(odd,5);

    return 0;
}