    #include<iostream>
    #include<algorithm>
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
            for(int i=0;i<n;i++)
            cin>>ar[i];
            int o=0;
            cin>>o;
            --o;
            int temp=ar[o];
            sort(ar,ar+n);
             for(int i=0;i<n;i++)
             {
                if(ar[i]==temp)
                cout<<i+1<<endl;
             }
       }
    }
             

