//https://www.codechef.com/problems/NUMCOMP

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0, b=0, n=0;
        cin>>a>>b>>n;
        if(n%2==0){
            if(abs(a)>abs(b))
            cout<<"1"<<endl;
            else if(abs(a)<abs(b))
            cout<<"2"<<endl;
            else
            cout<<"0"<<endl;
        }
        else{
            if(a>b)
            cout<<"1"<<endl;
            else if(b>a)
            cout<<"2"<<endl;
            else
            cout<<"0"<<endl;
        }
    }
}
