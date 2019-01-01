#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0;
        cin>>a;
        int c=0;
        while(a){
            if(a>=100){
                c=c+a/100;
                a=a%100;
            }
            else if(a>=50 and a<100){
                c=c+a/50;
                a=a%50;
            }
            else if(a>=10 and a<50){
                c=c+a/10;
                a=a%10;
            }
            else if(a>=5 and a<10){
                c=c+a/5;
                a=a%5;
            }
            else if(a>=2 and a<5){
                c=c+a/2;
                a=a%2;
            }
            else if(a==1){
                c=c+1;
                a=a%1;
            }
        }
        cout<<c<<endl;
    }
}