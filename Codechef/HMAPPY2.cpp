#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t=0;
    cin>>t;
    while(t--){
       long long int n=0, a=0, b=0, k=0, ca=0, cb=0;
        
        cin>>n>>a>>b>>k;
        for(long long int i=1;i<=n;i++){
            if(i%a==0 and i%b==0)
            continue;
            else if(i%a==0)
            ca++;
            else if(i%b==0)
            cb++;
        }
    
    if(ca+cb>=k)
    cout<<"Win"<<endl;
    else
    cout<<"Lose"<<endl;
    }
}
