    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t=0;
        cin>>t;
        while(t--){
            int n=0;
            cin>>n;
        string s;
        vector<string>v;
        set<string>d;
        for(int i=0;i<n;i++){
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        d.insert(v[i]);
        set<string>::iterator it;
        it=d.begin();
        for(it=d.begin();it!=d.end();it++)
        cout<<*it<<endl;
    }
    } 

