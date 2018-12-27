#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=0, p=0, l=0;
    l=s.length();
    if(l%2 == 0)
    k = (l/2) - 1;
    else
    k=l/2;
    
    cout<<s[k];
    
    p = k-1;
    k = k+1;

    while(k<l){
    cout<<s[k];
    if(p>=0)
    cout<<s[p];
    k++;
    p--;
    }
    
}