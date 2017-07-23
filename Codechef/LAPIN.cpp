    #include<iostream>
    #include<algorithm>
    #include<string>
    using namespace std;
    int main()
    {
        string s,s1,s2;
        int t=0;
        cin>>t;
        while(t--)
        {
            cin>>s;
            int l=s.length();
            int p=l/2;
            s1=s.substr(0,p);
            if(l%2!=0)
            s2=s.substr(p+1,l-1);
            else
            s2=s.substr(p,l-1);
            //cout<<s2<<endl;
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
             

