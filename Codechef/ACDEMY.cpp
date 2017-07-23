    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int a=0,i=0,c=0,max=0;
            cin>>a;
            int ar[a];
            for(i=0;i<a;i++)
            cin>>ar[i];
            for(i=2;i<a;i++)
            {
                if(ar[i]==ar[i-1]+ar[i-2])
                {
                c++;
                if(c>max)
                max=c;
                }
                else
                c=0;
            }
                
            if(a>2)
            cout<<max+2<<endl;
            else
            cout<<a<<endl;
        }
    } 