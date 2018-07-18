#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    int first=1, sum=0, third=0;
    int second=1;
    sum=sum+first+second;
    for(int i=0;i<t-2;i++){
        third=first+second;
        first=second;
        second=third;
        
        sum=sum+third;
    }
    if(t==1)
    cout<<"1";
    else
    cout<<sum;
}