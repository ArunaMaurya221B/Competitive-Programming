//https://www.codechef.com/problems/FLOW004
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        //cout<<int(s[0])-48<<" "<<int(s[s.length()-1])-48<<" ";
        sum=s[0]-48+s[s.length()-1]-48;
        cout<<sum<<endl;
    }
}
