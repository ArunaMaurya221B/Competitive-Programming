    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long int p=10000,k=1,j=0,l=0,i=0;
        vector<int>v;
        for(i=0;i<p;i++)
        {
            l=l+k+j;
        v.push_back(l);
        j++;
        }
        int t=0;
        cin>>t;
        while(t--)
        {
            int a=0;
            cin>>a;
            vector<int>::iterator it;
            it=find(v.begin(),v.end(),a);
            if(it!=v.end())
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
        
    } 

