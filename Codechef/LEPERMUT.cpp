    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int flag=0;
            int a=0;
            cin>>a;
            int ar[a];
            int linver=0,inver=0;
            if(a==1)
            flag=1;
            for(int i=0;i<a;i++)
            cin>>ar[i];
            for(int i=0;i<a;i++)
            {
                for(int j=i+1;j<a;j++)
                {
                    if(ar[i]>ar[j])
                    inver++;
                }
            }
            for(int i=0;i<a-1;i++)
            if(ar[i]>ar[i+1])
            linver++;
            if((linver==inver)||flag==1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    } 

