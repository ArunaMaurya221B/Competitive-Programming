    #include<iostream>
    using namespace std;
    int main()
    {
        int a=0,b=0;
        int t=0;
        cin>>t;
        while(t--)
        {
           cin>>a>>b;
            if(a>b)
            cout<<a<<" ";
            else
            cout<<b<<" ";
            cout<<a+b<<endl;
        }
    } 
