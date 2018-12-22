//https://www.codechef.com/problems/TSORT
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    long int ar[t];
    for(int i=0;i<t;i++)
    cin>>ar[i];
    
    sort(ar, ar+t);
    
    for(int i=0;i<t;i++)
    cout<<ar[i]<<endl;
}
