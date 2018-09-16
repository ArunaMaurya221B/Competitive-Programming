http://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0, k=0, c=0;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    int x=ar[k-1];
    for(int i=0;i<n;i++){
        if(ar[i]>=x && ar[i]!=0)
        c++;
    }
    cout<<c;
}
