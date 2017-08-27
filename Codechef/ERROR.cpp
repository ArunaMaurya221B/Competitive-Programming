    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int pos1=0,pos2=0;
            string s1="010";
            string s2="101";
            string s;
            cin>>s;
            pos1=s.find(s1);
            pos2=s.find(s2);
            if((pos1!=-1)||(pos2!=-1))
            cout<<"Good"<<endl;
            else
           cout<<"Bad"<<endl;
        }
    } 

