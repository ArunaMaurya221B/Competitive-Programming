    #include<bits/stdc++.h>
    using namespace std;
    int main(){
       long int a=0, pairs=0, p=0;
        cin>>a;
        int ar[a], cnt[10000];
        for(int i=0;i<a;i++){
            cin>>ar[i];
            cnt[ar[i]]=count(ar, ar + a, ar[i]);
        }
        for(int i=0;i<10000;i++){
            p=cnt[i];
            pairs += (p/2);
            if(i==1000)
            cout<<pairs<<" ";
        }
        
       // cout<<pairs<<" ";
        
        
    } 
