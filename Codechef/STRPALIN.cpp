#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int flag=9,pos=-2;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<s1.length();i++)
        {
            pos=s2.find(s1[i]);
            if(pos!=-1)
            {
                flag=1;
                break;
            }
           else
            flag=0;
        }
        if(flag==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}
         
