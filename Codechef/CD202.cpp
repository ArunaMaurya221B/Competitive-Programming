    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int i=0;
        string s;
        getline(cin,s);
       // cout<<s;
            int l=s.length();
            for(i=0;i<l;)
            {
                if((s[i]=='a')||(s[i]=='e')||(s[i]=='o')||(s[i]=='i')||(s[i]=='u'))
                {
                cout<<s[i];
                i=i+3;
                }
                else
                {
                    cout<<s[i];
                    i=i+1;
                }
            }
        } 

