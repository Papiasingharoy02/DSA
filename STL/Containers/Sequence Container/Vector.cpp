#include<iostream>
#include<vector>

using namespace std;
int main(){


// size() shows how many element present in vector 
// capacity() shows how much memory space assign for vector ele.

    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;  

// push_back()-------------used for inserting elments at the end
    v.push_back(1);
     cout<<"Capacity: "<<v.capacity()<<endl;  

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;  

    v.push_back(3);
     cout<<"Capacity: "<<v.capacity()<<endl;  

    cout<<"Elemnt at 2nd index-> "<<v.at(2)<<endl;

    cout<<"First element -> " <<v.front()<<endl;
    cout<<"Last elemnt -> "<<v.back()<<endl;

    // pop_back()-------------used for pop or removing the elment at the end

    cout<<"Before pop"<<endl;
    for(int i:v){
        {
            cout << i <<" ";
        }
        cout<<endl;
    }
    v.pop_back();
    cout<<"After the pop"<<endl;
    for(int i:v){
        {
            cout << i <<" ";
        }
    }

    cout<<"Before clearing the vector size-> " <<v.size()<<endl;
    v.clear(); //clear() used for clear whole vector
    cout<<"After clearing the vector size-> " <<v.size()<<endl;

    vector <int> a(5,1);  //the whole array replace with 1
    cout<<"print a-> "<<endl;
    for(int i:a){
        cout<< i <<" ";
    }
    cout<<endl;

    vector <int> last(a); // a vector value copies to last vector
    cout<<"print last-> "<<endl;
    for(int i:last){
        cout<< i <<" ";
    }
    return 0;
}