#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    list <int> n(5,100);
    cout<<"Printing the n-> ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    list <int> m(n); //copying n into m list
    cout<<"Printing the m: ";
    for(int i:m){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    l.push_back(4);
    l.push_front(5);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    // l.erase(l.begin());
    l.pop_front();
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size -> "<<l.size()<<endl;


    return 0;
}