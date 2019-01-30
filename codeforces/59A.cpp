#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0;
        cin>>a;
        string s;
        cin>>s;
        if(a==1)
        cout<<"NO"<<endl;
        else if(a==2){
            if(s[0]<s[1])
            cout<<"YES"<<endl<<"2"<<endl<<s[0]<<" "<<s[1]<<endl;
            else
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl<<"2"<<endl<<s[0]<<" ";
            for(int i=1;i<a;i++)
            cout<<s[i];
            
            cout<<endl;
        }
    }
}
