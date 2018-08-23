#https://codeforces.com/problemset/problem/798/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    int l=s.length();
    for(int i=0, j=l-1; i<j; i++, j--){
        if(s[i]!=s[j])
        c++;
    }
    if(c==0 && l%2!=0)
    cout<<"YES";
    else if(c==0 && l%2==0)
    cout<<"NO";
    else if(c==1)
    cout<<"YES";
    else
    cout<<"NO";
}
