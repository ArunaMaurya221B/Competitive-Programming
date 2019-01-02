#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    int temp=t, c=0;
    while(t--){
        int a=0;
        cin>>a;
        if(a%2==0)
        c++;
    }
    
    if(c>(temp-c))
    cout<<"READY FOR BATTLE";
    else if(c==(temp-c))
    cout<<"NOT READY";
    else
    cout<<"NOT READY";
}