#include<iostream>
#include<map>
using namespace std;

int main(){

// map complexity---- O(log n) 
    map<int,string> m;
    m[1]="papia";
    m[2]= "singha";
    m[13]= "roy";

    m.insert( {5,"bheem"}); // other way to insert values

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" " << i.second<<endl;
    }

    cout<<"Finding 13 -> "<<m.count(13)<<endl; 

    m.erase(13);
    cout<<"After erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" " << i.second<<endl;
    }

    auto it = m.find(13);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}