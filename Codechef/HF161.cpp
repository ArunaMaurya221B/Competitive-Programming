    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int c=0,i=0,j=0;
        string s;
        cin>>s;
        int l=s.length();
        for(i=0;i<l;i++)
        {
        if(s[i]=='h')
        {
            for(j=i+1;j<l;j++)
            {
                if(s[j]=='m')
                c++;
                else
                break;
            }
        }
    }
    cout<<c<<endl;
    }
   } 

