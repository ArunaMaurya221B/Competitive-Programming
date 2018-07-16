    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int a=0, b=0, c=0;
        int ar[3];
        cin>>a>>b>>c;
        ar[0]=a;
        ar[1]=b;
        ar[2]=c;
        sort(ar, ar+3);
        cout<<ar[1];
    } 
