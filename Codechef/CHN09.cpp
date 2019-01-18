#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char, int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        map<char, int>::iterator it;
        it = m.begin();
        
        int one = it->second;
        it++;
        int second = it->second;
        
        if(one>second)
        cout<<second<<endl;
        else
        cout<<one<<endl;
        
    }
}