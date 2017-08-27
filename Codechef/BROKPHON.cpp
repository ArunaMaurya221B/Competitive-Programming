    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int n=0;
            cin>>n;
            int ar[n];
            for(int i=1;i<=n;i++)
            cin>>ar[i];
            int c=0;
            for(int i=1;i<=n;i++)
            {
                if(i > 1)
                {
                    if(ar[i] != ar[i - 1])
                    {
                        c++;
                        continue;
                    }
                }
                if(i < n)
                {
                    if(ar[i] != ar[i + 1])
                    {
                        c++;
                    }
                }
            }
           cout <<c<<endl;
        }
    } 

