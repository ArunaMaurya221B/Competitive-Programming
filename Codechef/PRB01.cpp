#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0, c=0;
        cin>>a;
        for(int i=1;i<=a;i++){
            if(a%i==0)
            c++;
        }
        
        if(c==2)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}