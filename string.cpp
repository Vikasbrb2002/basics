#include<bits/stdc++.h>
using namespace std;
int main(){
    // ---------  methods of initialization -
    // first ----
    
    char str[]="vikas";
    for(int i=0;i<5;i++){
        cout<<str[i];
    }
    cout<<endl;
// second-------
char name[] ={'v','i','k','a','s','\0'};
cout<<name;
cout<<endl;
// ----------
// char state[40];
// do{
//     cin>>state;
//     if(*state)
//     cout<<state<<endl;
// }while(*state);
// use cin.getline()-------
char nam[100];
cout<<"Enter your name : ";
// cin>>nam;
//  char p= cin.getline(nam);
cin.getline(nam,100);
cout<<"Your name is : "<<nam;

// ----use cin.get()-------
char s;
int count=0;
while(cin.get(s)){
    if(s=='e')
    count++;
}
cout<<count;
    return 0;
}