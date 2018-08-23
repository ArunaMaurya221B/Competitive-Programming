#http://codeforces.com/problemset/problem/4/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, long long int>m;
    map<string, long long int>::iterator it;
    it=m.begin();
    long long int t=0;
    cin>>t;
    string s;
    while(t--){
        int flag=0;
        cin>>s;
        if(m.find(s)==m.end()){
            m[s]=0;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<m[s]+1<<endl;
            m[s]++;
        }
        /*
        for(it=m.begin();it!=m.end();it++){
            if(it->first == s){
            cout<<s<<m[s]<<endl;
            flag=1;
            m[s]++;
            }
        }
        if(flag!=1){
        m[s]++;
        cout<<"OK"<<endl;
        }
        */
    }
}
