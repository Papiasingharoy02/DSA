#include<iostream>
using namespace std;
int main(){

    for(int i=0; i<5;i++){
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue;
        cout<<"Hello"<<endl;
    }



// questions------------
    
// 1) // for(int i=0; i<=15; i+=2){
    //     cout<<i<<" ";

    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }
    // output : 0 3 5 7 9 11 13 15

// 2)// for(int i=0;i<5;i++){
 //for(int j=i;j<=5;j++){
//cout<<i<<" "<<j<<endl;
// }       
// }

// output
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5

// 3)
// for (int i=0; i<5; i++){
//     for(int j=i; j<=5; j++){
//         if(i+j== 10){
//             break;
//         }
//         cout<<i<<" "<<j << endl;
//     }
// }
// output
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5


    return 0;
}