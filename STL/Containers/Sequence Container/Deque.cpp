#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(auto i:d){
        cout<<i<<" ";
    }

    // d.pop_front();
    // d.pop_back();
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<endl;

    cout<<"First index element-> "<<d.at(1)<<endl;

    cout<<"Empty or not-> "<<d.empty()<<endl;

    cout<<"First element -> " <<d.front()<<endl;
    cout<<"Last elemnt -> "<<d.back()<<endl;

    // erase from beginning

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;

// show the element after erase
    for(int i:d){
        cout<<i<<" ";
    }

    return 0;
}