//https://www.codechef.com/problems/MUFFINS3
#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t=0;
    cin>>t;
    while(t--){
        int a=0;
        cin>>a;
        if(a%2==0)
        cout<<(((a+1)/2)+1)<<endl;
        else
        cout<<((a+1)/2)<<endl;
    }
}
