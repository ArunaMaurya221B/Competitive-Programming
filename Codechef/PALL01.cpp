#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string rev(s);
        reverse(rev.begin(), rev.end());
        if(s==rev)
        cout<<"wins"<<endl;
        else
        cout<<"losses"<<endl;
    }
}