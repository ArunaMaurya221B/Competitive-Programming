#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0, flag=9, ci=0, cn=0, cy=0;
        cin>>a;
        string s;
        cin>>s;
        for(int i=0;i<a;i++){
            if(s[i]=='I')
            ci++;
            else if(s[i] == 'N')
            cn++;
            else
            cy++;
        }
        
        if(ci!=0)
        cout<<"INDIAN"<<endl;
        else{
            if(cy==0)
            cout<<"NOT SURE"<<endl;
            else
            cout<<"NOT INDIAN"<<endl;
        }
    }
}