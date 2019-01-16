#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char, int> m;
        
        for(int i=0;i<s.size();i++)
        m[s[i]]++;
        
        map<char, int>:: iterator it;
        it = m.begin();
        
        int i=0;
        int ar[m.size()];
        
        for(;it!=m.end();it++){
            ar[i]=it->second;
            i++;
        }
        int sum=0;
        sort(ar, ar+m.size());
        int largest = ar[m.size()-1];
        for(int i=0;i<m.size()-1;i++){
            sum=sum+ar[i];
        }
        
        if((sum-largest)==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}