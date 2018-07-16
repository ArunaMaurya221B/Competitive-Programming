    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t=0;
        cin>>t;
        while(t--){
            int a=0, even=0,odd=0;
            cin>>a;
            int ar[a];
            for(int i=0;i<a;i++){
                cin>>ar[i];
                if(ar[i]%2==0)
                even++;
                else
                odd++;
            }
                if((odd%2==0)||(a==1))
                    cout<<1<<endl;
                else
                    cout<<2<<endl;
        }
    } 
