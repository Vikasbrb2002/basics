// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int makemax(int a[],int n){
    int max_s_sum=INT_MIN;
    int temp_s_sum=0;
    int totalsum=0;
    int min_st_sum=INT_MAX;
    int temp_st_sum=0;
    for(int i=0;i<n;i++){
        temp_s_sum+=a[i];
        if(max_s_sum<temp_s_sum);
        max_s_sum=temp_s_sum;
        
    }
    if(temp_s_sum<0){
        temp_s_sum=0;
    }
    for(int i=0;i<n;i++){
        temp_st_sum+=a[i];
        if(min_st_sum>temp_st_sum){
            min_st_sum=temp_st_sum;
        }
        if(temp_st_sum>0){
            temp_st_sum=0;
        }
    }
    totalsum=max_s_sum-(min_st_sum);
    return totalsum;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<makemax(a,n);

    return 0;
}