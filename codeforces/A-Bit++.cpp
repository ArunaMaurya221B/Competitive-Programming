http://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0, c=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='X' && s[1]=='-' && s[2]=='-')
        c--;
        else if(s[0]=='-' && s[1]=='-' && s[2]=='X')
        c--;
        else if(s[0]=='X' && s[1]=='+' && s[2]=='+')
        c++;
        else
        c++;
    }
    cout<<c;
}
