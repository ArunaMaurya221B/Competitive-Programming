#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
    int a=0;
    cin>>a;
    int temp=0, sum=0;
    int ar[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<=i; j++){
            cin>>ar[i][j];
        }
    }
    
    for(int i=a-1;i>=0;i--){
        for(int j=0;j<i;j++){
            temp = max(ar[i][j], ar[i][j+1]);
            ar[i-1][j] = ar[i-1][j] + temp;
        }
    }
    
    cout<<ar[0][0]<<endl;
    
    for(int i=0;i<a;i++)
    for(int j=0; j<=i;j++)
    ar[i][j]=0;
}
}