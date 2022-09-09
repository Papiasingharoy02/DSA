#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector <int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(2);

    cout<<"Finding 6-> "<< binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a =2;
    int b =5;
    cout<<"Max: " <<max(a,b)<<endl;
    cout<<"Min: " <<min(a,b)<<endl;

    swap(a,b);
    cout << "a -> " << a << endl <<  "b -> " << b << endl;

    string abcd ="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"Reverse->"<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end()); //intro sort = quick sort +heap sort + insertion sort
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}