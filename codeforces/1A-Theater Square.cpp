http://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a=0, b=0, c=0,x,y,z,p,q,r, ans;
    cin>>a>>b>>c;
    if(a%c==0)
    x=0;
    else
    x=1;
    
    if(b%c==0)
    y=0;
    else
    y=1;
    
    
    p=a/c+x;
    q=b/c+y;
    ans=p*q;
    cout<<ans;
    
}
