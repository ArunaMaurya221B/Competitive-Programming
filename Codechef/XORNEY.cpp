#include<bits/stdc++.h>
#include<curses.h>
using namespace std;

long long int calculate_xor(long long int number){
    if(number%4==0)
    return number;
    else if(number%4==1)
    return 1;
    else if(number%4==2)
    return (number+1);
    else if(number%4==3)
    return 0;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t=0;
    cin>>t;
    while(t--){
        long long int a=0, b=0;
        cin>>a>>b;
        int k=calculate_xor(b);
        int l=calculate_xor(a-1);
        int m=k^l;
        if(m%2==0)
        cout<<"Even"<<endl;
        else
        cout<<"Odd"<<endl;
    }
}
