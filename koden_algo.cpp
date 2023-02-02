// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int totalsum(int a[],int n){
    int maxsum=0;
    int cursum=0;
    for(int i=0;i<n;i++){
            cursum+=a[i];
        if(cursum>maxsum){
            maxsum=cursum;
            
        }
        if(cursum<0){
            cursum=0;
        }
        
    }
    return maxsum;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<totalsum(a,n);

    return 0;
}