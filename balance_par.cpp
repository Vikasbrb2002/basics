#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> sym={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
string iscorrect(string s){
    stack<int> st;
    for(char bracket: s){
        if(sym[bracket]<0){
            st.push(bracket);

        }
        else{
            if(st.empty()) return "no";
            char top=st.top();
            st.pop();
    if(sym[top]+sym[bracket]!=0) return "no";
        }
    }
    if(st.empty()) return "yes";
    return "no";
}
int main(){
    string s ;
    cin>>s;
    cout<<iscorrect(s)<<endl;
    return 0;
}