#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue <string> q;
    q.push("papia");
    q.push("singha");
    q.push("roy");

    cout<<"Fist Element: "<<q.front()<<endl;

    q.pop();
    cout<<"Fist Element: "<<q.front()<<endl;

    cout<<"Size "<<q.size()<<endl;

    return 0;
}