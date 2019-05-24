#include<bits/stdc++.h>
#include <algorithm> 
#include <cstring>
using namespace std;
int main(){
    string s,q;
    cin>>s>>q;
    
    for(int i=0;i<s.length();i++)
    s[i]= tolower(s[i]);
    
    for(int i=0;i<q.length();i++)
    q[i] = tolower(q[i]);
    
    if(s>q)
    cout<<"1";
    else if(q>s)
    cout<<"-1";
    else
    cout<<"0";
}