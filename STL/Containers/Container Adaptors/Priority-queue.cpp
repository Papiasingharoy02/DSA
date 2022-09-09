#include<iostream>
#include<queue>

using namespace std;
int main(){

// max_heap
    priority_queue <int> maxi;
     maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(8);
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    // min_heap
    priority_queue <int , vector <int>, greater<int> > mini;
    mini.push(6);
    mini.push(5);
    mini.push(0);
    mini.push(1);
    int m = mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    
    cout<<"Empty or not "<<maxi.empty()<<endl;
    cout<<"Empty or not "<<mini.empty()<<endl;
    return 0;

}