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
            int a[n],b[n];
            for(int i=0;i<n;i++)
            cin>>a[i];
            for(int j=0;j<n;j++)
            cin>>b[j];
            int c=0;
            for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    if((a[i]-0)>=b[i])
                    c++;
                }
                else
                {
                    if((a[i]-a[i-1])>=b[i])
                    c++;
                    else
                    continue;
                }
            }
           cout<<c<<endl;
        }
    }
                     

