#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        long int a=0;
        cin>>a;
        long long  ar[a];
        for(int i=0;i<a;i++)
        cin>>ar[i];
        
        sort(ar, ar+a);
        
        int small = ar[0];
        
        cout<<small*(a-1)<<endl;
    }
}