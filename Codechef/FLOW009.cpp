#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        double expense=0.00, a=0.00, b=0.00;
        cin>>a>>b;
        if(a>1000){
            expense = a*(b-(0.1*b));
        }
        else
        expense = a*b;
        cout.precision(6);
        cout<<fixed<<expense<<endl;
    }
}