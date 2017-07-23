    #include<iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            float b=0,ls=0,rs=0.0;
            cin>>b>>ls;
            float temp=0;
            temp=pow(ls,2)-pow(b,2);
            rs=sqrt(temp);
            cout<<rs<<" ";
            rs=pow(ls,2)+pow(b,2);
            cout<<sqrt(rs)<<endl;
        }
    }
             

