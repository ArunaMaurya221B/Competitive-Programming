    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        int i=0,a=0;
        vector<long int>v;
        for(i=0;i<t;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        //v.assign(s.begin(),s.end());
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(i=0;i<t;i++)
        {
            if(v[i]>v[i+1])
            {
            cout<<v[i+1]<<endl;
            return 0;
            }
        }
        cout<<"0"<<endl;
        return 0;
    } 

