#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0;
        cin>>a;
        long long int sum=0;
        for(long int i=1;i<=a;i++){
            sum = (i*(i+1))/2;
            if(sum == a){
                cout<<i<<endl;
                break;
            }
            else if(sum>a){
                cout<<i-1<<endl;
                break;
            }
        }
    }
}