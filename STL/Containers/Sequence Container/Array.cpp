#include<iostream>
#include<array>

using namespace std;
int main(){

    int basic[3]={1,2,3}; //basic array

    array<int,3> a ={1,5,6};  //STL array

    int size= a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index -> "<< a.at(2)<<endl;  // using at()  find the element at specify index

    cout<<"Empty or not : "<<a.empty()<<endl; // using empty( ) check the array is empty or not

    cout<<"First element -> " <<a.front()<<endl;
    cout<<"Last elemnt -> "<<a.back()<<endl;
    return 0;
}