    #include<iostream>
    #include<vector>
    #include<string>
    #include<algorithm>
    using namespace std;
     
    int main()
    {
        int n=0,m=0,a=0;
        cin>>n>>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
         vector< pair <int,string> > sv;
        vector< pair <int,string> > nv;
        int b=0,p=0;
        string s;
        vector<int>::iterator it;
        for(int i=0;i<m;i++)
        {
            cin>>b>>p>>s;
            it=find(v.begin(),v.end(),b);
            if(it!=v.end())
            {
                sv.push_back(std::make_pair(p,s));
            }
            else
            nv.push_back(std::make_pair(p,s));
        }
        int l=0;
        l=sv.size();
        int k=0;
        k=nv.size();
        sort(sv.begin(),sv.end());
        sort(nv.begin(),nv.end());
        reverse(nv.begin(),nv.end());
        reverse(sv.begin(),sv.end());
        for(int i=0;i<l;i++)
        cout<<sv[i].second<<endl;
         for(int i=0;i<k;i++)
        cout<<nv[i].second<<endl;
    }
     
     

