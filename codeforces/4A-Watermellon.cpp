//http://codeforces.com/problemset/problem/4/A


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0, j=1, flag=0;
    cin>>t;
    
    for(int i=1;i<t;i++){
        if(i%2==0){
            int b=t-i;
            if(b<t && b%2==0){
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
}
