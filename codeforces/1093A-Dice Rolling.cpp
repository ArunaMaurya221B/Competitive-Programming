#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0;
        cin>>a;
        int throws = 0;
        if(a<=7)
        throws=1;
        else
        throws=(a/7)+1;
        
        cout<<throws<<endl;
    }
}