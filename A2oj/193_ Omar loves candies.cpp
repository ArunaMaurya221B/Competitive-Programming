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
        int large=-1;
        char k;
        for(;it!=m.end();it++){
            if(it->second > large){
                large = it->second;
                k = it->first;
            }
        }
        cout<<large<<" "<<k<<endl;
    }
}