#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0, b=0;
    cin>>t;
    int ar[t];
    
    for(int i=0;i<t;i++)
    cin>>ar[i];
    
    map<int, int>v;
    
    for(int i=0;i<t;i++){
       v[ar[i]]++;
    }
    
    for (auto &e:v){
        if(e.second>1)
        cout<<e.first<<" ";
    }


   
}