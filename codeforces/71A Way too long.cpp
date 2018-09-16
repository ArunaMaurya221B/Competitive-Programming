http://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int l=s.length();
    if(l<=10)
    cout<<s;
    else{
        cout<<s[0]<<(l-2)<<s[l-1];
    }
    cout<<endl;
    }
}
