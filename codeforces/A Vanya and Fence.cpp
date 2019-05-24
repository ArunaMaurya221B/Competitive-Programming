#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0, k=0, c=0;
    cin>>t>>k;
    int ar[t];
    
    for(int i=0;i<t;i++){
        cin>>ar[i];
        if(ar[i]>k)
        c=c+2;
        else
        c=c+1;
    }
    
    cout<<c;
}