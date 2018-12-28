#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0;
        cin>>a;
        long long int fact=1;
        while(a){
            fact=fact*a;
            a--;
        }
        cout<<fact<<endl;
    }
}