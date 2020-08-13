#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0,b=0;
        cin>>a>>b;
        int win=9;
        
        if(a%2==0){
            if(b>(a/2)+2)
            win=1;
            else
            win=0;
        }
        else{
            if((a-b)>b)
            win=0;
            else
            win=1;
            
        }
        cout<<win<<endl;
    }
}
