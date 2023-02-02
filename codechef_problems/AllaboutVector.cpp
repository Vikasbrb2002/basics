#include<bits/stdc++.h>
using namespace std;

// typedef vector<int> interg;      type of declairation
// void print(interg v){



 void print(vector<string> &v){
    cout<<"The size of the vector : "<<v.size()<<endl;
    // -------------------------------------------------first method of traversal;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    
    // --------------------------------------------------second method of traversal
    // vector<string> ::iterator it;
    // for( it= v.begin(); it!=v.end();it++){
    //     cout<<(*it)<<" ";
    // }

    // --------------------------------------------third method of traversal(range based loop).
    for(auto &name: v){
        cout<<name<<" ";
    }
    cout<<endl;
    }

void load(vector<string> &v){
     v.push_back("Satish");
     v.push_back("praadeep");
}
int main(){
    // ------    Vector     ----------.   insertion operation
    //     v.begin()                                v.size().
    //     v.end()                               v.find().
    //     v.front()                               v.erase().
    //     v.at()                               v.clear().
    // vector<int> v(10);   //v(10)---10 is the size of vector.  
    // v[0]=10;
    // v[1]=20;
    // interg v;----------
    vector<string> v;
    v.push_back("vikas");   //insertion in vector.
    v.push_back("shubham");
    v.push_back("govind");
    v.push_back("arvind");
    cout<<"size here : "<<v.size()<<endl;
    
    sort(v.begin(),v.end());
    
    // v.find("vikas");
    load(v);
    print(v);
    cout<<v.front()<<endl;
     cout<<v.back()<<endl;
     v.pop_back();
     v.pop_back();
     print(v);
    //  v.clear();
    v.erase(v.begin()+2);
     print(v);
    
    return 0;
}