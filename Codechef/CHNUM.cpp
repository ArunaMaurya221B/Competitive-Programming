#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0, npos=0, nneg=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]>0)
            npos++;
            else if(ar[i]<0)
            nneg++;
        }
        if(npos>nneg and nneg==0)
        cout<<npos<<" "<<npos<<endl;
        else if(npos>nneg and nneg!=0)
        cout<<npos<<" "<<nneg<<endl;
        else if(nneg>npos and npos==0)
        cout<<nneg<<" "<<nneg<<endl;
        else
        cout<<nneg<<" "<<npos<<endl;
    }
}
