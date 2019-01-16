#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string s1, s2;
        int c=0, c1=0;
        cin>>s1>>s2;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?')
            c++;
            if(s1[i]==s2[i] && s1[i]!='?' && s2[i]!='?')
            c1++;
        }
        cout<<c<<" "<<s1.length()-c1<<endl;
    }
}