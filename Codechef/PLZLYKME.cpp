    #include<iostream>
    using namespace std;
    int main()
    {
        long long int t=0;
        cin>>t;
        while(t--)
        {
            long long int l=0,c=0,s=0,d=0;
            cin>>l>>d>>s>>c;
            for(int i=1;i<d;i++)
            {
            s=s+s*c;
            if(s>=l)
            break;
            }
            if(s<l)
            cout<<"DEAD AND ROTTING"<<endl;
            else
           cout<<"ALIVE AND KICKING"<<endl;
        }
    } 

