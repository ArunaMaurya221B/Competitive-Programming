        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
        int t=0,temp=0;
        cin>>t;
        vector<int>v;
        vector<int>::iterator it,pt;
        for(int i=0;i<t;i++)
        {
            cin>>temp;
        v.push_back(temp);
        }
         
        sort(v.begin(),v.end());
        int b=0,x=0,y=0;
        cin>>b;
        while(b--)
        {
            cin>>x>>y;
        it=lower_bound(v.begin(),v.end(),x);
        pt=upper_bound(v.begin(),v.end(),y);
        cout<<(pt-v.begin())-(it-v.begin())<<endl;
        //cout<<<<endl;
       }
        }  
