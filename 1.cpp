#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;++i){
	        cin>>b[i];
	    }
	    int res=INT_MIN,index;
	    for(int i=0;i<n;++i){
	        if(res<a[i]){
	            res=a[i];
	            index=i;
	        }
	    }
	    unordered_map<int,int> m;
	    for(int i=0;i<n;++i){
	        m[a[i]]++;
	    }
	    int ans=INT_MIN,newindex;
	    if(m[res]>=2){
	        for(int i=0;i<n;++i){
	            if(res==a[i]){
	                if(ans<=b[i]){
	                    ans=b[i];
	                    newindex=i;
	                }
	            }
	        }
	        cout<<(newindex+1)<<"\n";
	    }
	    else{
	        cout<<index+1<<"\n";
	    }
	}
	return 0;
}
