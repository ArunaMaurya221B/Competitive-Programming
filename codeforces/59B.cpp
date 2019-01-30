#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0, k=0;
        cin>>n>>k;
        int no=k;
        for(int i=0;i<n;i++)
        no=no+9;
        cout<<no<<endl;
    }
}
