// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> om={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
    string check_balance(string s){
    stack<char>st;
    
    for(char bracket : s){
        if(om[bracket]<0){
            st.push(bracket);
        }
        else{
            if(st.empty()) return "NO";
        char top=st.top();
        st.pop();
            if(om[bracket]+om[top]!=0){
                return "NO";
            }
        }
    }
        if(st.empty())
        return "yes";
        else
        return "No";
        
        
    
    }
int main() {
    // Write C++ code here
    string s;
    cin>>s;
    cout<<check_balance(s);

    return 0;
}