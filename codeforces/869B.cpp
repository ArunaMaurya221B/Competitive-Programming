http://codeforces.com/contest/869/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a=0, b=0, p=1, i=1;
    cin>>a>>b;
    if(b-a>=10)
    cout<<"0";
    else{
    for(long long int i=1;(a+i)<=b;i++){
        p=(p*((a+i)%10))%10;
        p=p%10;
    }
    
    cout<<p;
    }
}
