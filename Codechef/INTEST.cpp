//https://www.codechef.com/problems/INTEST

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n=0, k=0, a=0, c=0;
    cin>>n>>k;
    while(n--){
        cin>>a;
        if(a%k==0)
        c++;
    }
    cout<<c;
}
