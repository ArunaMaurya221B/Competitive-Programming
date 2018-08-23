#https://www.codechef.com/problems/T21/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        long long int sum1=0, sum2=0;
        for(long long int i=0;i<a.length();i++){
            sum1+=a[i]-48;
        }
        for(long long int i=0;i<b.length();i++){
            sum2+=b[i]-48;
        }
        
        int mod=((sum1%3 * sum2%3)%3);
        cout<<mod<<endl;
    }
}
