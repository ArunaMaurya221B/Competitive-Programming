#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        int c=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i] &&(s1[i] != '?' && s2[i] != '?'))
            c++;
        }
        if(c)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
}