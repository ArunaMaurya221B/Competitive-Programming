#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string s;
        stack<int>k;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                cout<<s[i];
            }
            else{
                if(s[i]!=')'){
                    k.push(s[i]);
                }
                else{
                    while(k.top()!='('){
                        cout<<char(k.top());
                        k.pop();
                    }
                    k.pop();
                }
            }
        }
        cout<<endl;
    }
}