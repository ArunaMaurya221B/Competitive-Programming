        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int t=0;
            cin>>t;
            while(t--)
            {
                int s=0;
                cin>>s;
                long long int ar[s];
                long long int sum=0,moves=0,ex_moves=0;
                for(int i=0;i<s;i++)
                {
                    cin>>ar[i];
                    sum=sum+ar[i];
                }
                long long int avg=sum/s;
                for(int i=0;i<s;i++)
                {
                    if(ar[i]>avg)
                    moves=moves+ar[i]-avg;
                    else
                    ex_moves=ex_moves+avg-ar[i];
                }
                if(moves==ex_moves)
                cout<<moves<<endl;
                else
                cout<<"No Treat"<<endl;
            }
        }  

