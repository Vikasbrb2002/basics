#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=22;
    int *p=&n; // *- derefence of n;
    int *(*d)= &p;
    cout<<"n = "<<n<<endl; 
    cout<<"n = "<<*p<<endl; 
    cout<<"d = "<<**d<<endl;
    cout<<"d = "<<(&p)<<endl;
    cout<<"address of p = "<<&p<<endl; 
    cout<<"address of p = "<<*d<<endl; 
    cout<< "address of n : "<<p<<endl;
    cout<< "address of n : "<<&n<<endl;
    
    return 0;
}