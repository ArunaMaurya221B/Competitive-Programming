#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        
        sort(ar, ar+n);
        
        int sum=ar[0]+ar[1];
        cout<<sum<<endl;
    }
}