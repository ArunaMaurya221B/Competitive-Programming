    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long int a=0,b=0,c=0,t=0,i=0;
        cin>>a>>b>>c;
        int ar[a];
        for(i=0;i<a;i++)
        cin>>ar[i];
        while(b--)
        {
            t=ar[a-1];
            for(i=a-2;i>=0;i--)
                ar[i+1]=ar[i];
                ar[0]=t;
        }
        while(c--)
        {
            cin>>i;
            cout<<ar[i]<<endl;
        }
   } 

