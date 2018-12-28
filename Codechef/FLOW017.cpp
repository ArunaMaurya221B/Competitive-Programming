#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=3;
        int ar[a];
        for(int i=0;i<a;i++)
        cin>>ar[i];
        
        sort(ar, ar+a);
        
        cout<<ar[1]<<endl;
    }
}