// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    /* 1
       2 3
       4 5 6
       7 8 9 10  */
    //    ---------------------------------------
    // int val=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-2;j++){
    //         // if((i+1)%2==0)
    //         cout<<j+1<<i+1;
            
    //     }
    //     cout<<endl;
    // }
    // -----------------------------------------------

    /*   
          *****
           *** 
            * 
    */
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //        cout<<" ";
    //     }
    //     for(int j=0;j<(n-i*2);j++)
    //     cout<<"*";
    //     cout<<endl;
    // }
    // -----------------------------------------------
    /* 0 1 0 1 0
       1 0 1 0 1
       0 1 0 1 0
       1 0 1 0 1  */

    //    for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if((i+j)%2==0)
    //         cout<<"0 ";

    //         else cout<<"1 ";
    //     }
    //         cout<<endl;
    //    }
    // --------------------------------------------------
    /*     A
           B C
           D E F
           G H I J    */


    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(char j=0;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    // ----------------------------------------------------4
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n+2;j++){
            printf("%c ",64-i+(4*(j+1)));
            // cout<<(65+4*(j+1));
        }
        cout<<endl;
    }
    return 0;
}