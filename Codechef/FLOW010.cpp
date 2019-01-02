#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    int temp=t, c=0;
    while(t--){
        char a;
        cin>>a;
        if(a=='B' or a=='b')
        cout<<"BattleShip"<<endl;
        else if(a=='C' or a=='c')
        cout<<"Cruiser"<<endl;
        else if(a=='D' or a=='d')
        cout<<"Destroyer"<<endl;
        else if(a=='F' or a=='f')
        cout<<"Frigate"<<endl;
        
    }
}