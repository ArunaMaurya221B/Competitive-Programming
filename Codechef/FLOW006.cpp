//https://www.codechef.com/problems/FLOW006

#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t=0, a=0, sum=0;
    cin>>t;
    while(t--){
        cin>>a;
        while(a){
            sum=sum+(a%10);
            a=a/10;
        }
        
        cout<<sum<<endl;
        sum=0;
    }
}
