    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t=0;
        cin>>t;
        while(t--){
            string s;
            cin>>s;
            int l=s.length();
            for(int i=0;i<l;i++){
                if(s[i]!='*')
                cout<<s[i];
                else
                break;
            }
            cout<<endl;
        }
        
    } 
