#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0, k=0;
        cin>>a;
        map<int, int>m;
        for(int i=0;i<a;i++){
            cin>>k;
            m[k]++;
        }
        map<int, int>::iterator it;
        it = m.begin();
        for(;it!=m.end();it++){
            if(it->second%2!=0)
            cout<<(it->first)<<endl;
        }
    }
}