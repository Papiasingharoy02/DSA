#include<iostream>
#include<set>
using namespace std;

int main(){

    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(6);
    s.insert(8);
    s.insert(6);
    s.insert(2); 

    for(auto i:s){
        cout<<i <<" ";
    }
    cout<<endl;

    // s.erase(s.begin());  // erase the 0th index element
    //   for(auto i:s){
    //     cout<<i <<" ";
    // }

    set <int> :: iterator it = s.begin();  //when want to erase the 1st position element
    it++;
    s.erase(it);  

    for(auto i:s){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"6 is present or not-> "<<s.count(6)<<endl; // count() says th element is present or not

    cout<<endl;

    set <int> :: iterator itr = s.find(6); // find( ) return the index of the mentioned element
    // cout<<"value of itr-> "<<*it<<endl;

    for(auto it= itr; it!=s.end();it++){
        cout<<*it<<endl;
    }


    return 0;

}