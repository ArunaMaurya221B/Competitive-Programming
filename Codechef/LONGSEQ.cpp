    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            string s;
            cin>>s;
            int one=0,zero=0;
            int l=s.length();
            for(int i=0;i<l;i++)
            {
            if(s[i]=='1')
            one++;
            else
            zero++;
            }
            if((one==1)||(zero==1))
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
             