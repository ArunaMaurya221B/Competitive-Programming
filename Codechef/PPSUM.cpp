#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int d=0, n=0, sum=0;
        cin>>d>>n;
        for(int i=0;i<d;i++){
        sum=(n*(n+1))/2;
        n=sum;
        }
        cout<<sum<<endl;
    }
}