#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    int flag=0;
	    for(int i=0;i<n;i++){
	            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
	            
	            count++;
	            }
	            else{
	              count=0;
	            }
	            if(count>=4){
	                flag=1;
	                break;
	            }
	       
	    }
	    if(flag==1){
	        cout<<"no"<<endl;
	       // break;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	   
	}
	return 0;
}
