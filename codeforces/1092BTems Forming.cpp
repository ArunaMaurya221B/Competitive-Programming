#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++)
    cin>>ar[i];
    
    sort(ar, ar+t);
    
    int num=0;
    
    for(int i=0;i<t;i++){
        num=num+abs(ar[i]-ar[i+1]);
        i++;
    }
    cout<<num;
}