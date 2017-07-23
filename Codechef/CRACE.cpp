    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int c=0;
            int a=0;
            cin>>a;
            while(a)
            {
            if(a>5)
            {
                a=a-5;
                c++;
            }
            else if((a>3)&&(a<5))
            {
                a=a-3;
                c++;
            }
            else
            {
                a=a-1;
                c++;
            }
            }
            
            if(c%2==0)
            cout<<"JACK"<<endl;
            else
            cout<<"JENNY"<<endl;
        }
    } 