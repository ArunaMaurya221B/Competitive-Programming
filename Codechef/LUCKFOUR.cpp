//https://www.codechef.com/problems/LUCKFOUR
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    int l=0;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        l=s.length();
        for(int i=0;i<l;i++){
            int k=int(s[i])-48;
            if(k==4)
            c++;
        }
        
        cout<<c<<endl;
    }
}
