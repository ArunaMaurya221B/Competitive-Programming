    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int s=0,flag=9;
            cin>>s;
            int ar[s];
            for(int i=0;i<s;i++)
            cin>>ar[i];
            sort(ar,ar+s);
            for(int i=1;i<s;i++)
            {
                if(abs(ar[i]-ar[i-1]<=1))
                flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    } 

