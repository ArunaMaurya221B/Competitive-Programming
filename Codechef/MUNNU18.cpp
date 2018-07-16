    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t=0;
        cin>>t;
        while(t--){
            long int n=0;
            cin>>n;
            int tr=n-1;
            long long int temp=1;
            while(tr){
                temp = temp+tr;
                tr--;
            }
            cout<<temp-1<<endl;
        }
    } 
