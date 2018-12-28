#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    string s;
    cin>>s;
    int offset = 0;
    int c=1;
    for(int i=0;i<t;i++){
        if(offset<t)
        cout<<s[offset];
        offset = offset+c;
        c++;
    }
}
