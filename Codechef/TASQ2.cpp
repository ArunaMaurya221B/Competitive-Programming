    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t=0;
        cin>>t;
        while(t--){
            int a=0;
            cin>>a;
            if(a%2!=0)
            cout<<"NO"<<endl;
            else{
                int f=0, b=0, c=0;
                for(int i=1;i<a;i++){
                    b=i;
                    c=a-b;
                    if((b%2==0)&&(c%2==0)&&(f==0)){
                    cout<<"YES"<<endl;
                    f=1;
                    }
                }
                if(f==0)
                cout<<"NO"<<endl;
            }
        }
    } 
