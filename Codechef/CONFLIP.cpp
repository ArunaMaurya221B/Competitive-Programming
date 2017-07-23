    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int a=0;
            cin>>a;
            while(a--)
            {
                int i=0,n=0,q=0;
                cin>>i>>n>>q;
                if(n%2==0)
                cout<<n/2<<endl;
                else
                {
                    if(i==1)
                    {
                        if(q==1)
                        cout<<n/2<<endl;
                        else
                        cout<<(n/2+1)<<endl;
                    }
                    else
                    {
                        if(q==1)
                        cout<<(n/2+1)<<endl;
                        else
                        cout<<n/2<<endl;
                    }
                }
            }
        }
    } 

