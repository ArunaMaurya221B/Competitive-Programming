    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        string s;
        cin>>s;
        int i=0,c=1;
        int l=s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]==s[i+1])
            c++;
            else
            {
                cout<<s[i]<<c;
                c=1;
            }
        }
    } 

