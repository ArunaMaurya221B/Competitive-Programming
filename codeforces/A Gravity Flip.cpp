#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    cin>>ar[i];
    sort(ar, ar+a);
    for(int i=0;i<a;i++)
    cout<<ar[i]<<" ";
}