    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int i=0;
            string s;
            cin>>s;
            int no=0,sum=0;
            int l=s.length();
            for(i=0;i<l;i++)
            {
                if(s[i]=='d')
                no--;
                else
                no++;
                if(no<0)
                {
                    no=0;
                   sum++;
                }
            }
            cout<<sum<<" "<<no<<endl;
        }
    } 

