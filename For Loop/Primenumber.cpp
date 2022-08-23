// #include<iostream>
// using  namespace std;
// int main(){
//     int n;
//     bool c=1;
//     cout<<"Enter the number: ";
//         cin>>n;
//         for(int i=2; i<n; i++){
//             if(n%i == 0){
//                 c=0;
//                 break;
//             }
//         }
    
//         if(c == 0){
//             cout<<"not a prime";
//         }
//         else{
//             cout<<"is a prime";
//         }


//     return 0;
// }
#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int i=0;
    int ans=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"anser is" << ans << endl;
}