#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        set<int>a;
        int b,c;
        cin>>b>>c;
        int a1[b],a2[c];
        
        for(int i=0;i<b;i++)
        {
            cin>>a1[i];
            a.insert(a1[i]);
        }
        for(int i=0;i<c;i++)
        {
        cin>>a2[i];
        a.insert(a2[i]);
        }
        int l=a.size();
       cout<<b+c-l<<endl;
        //int k=a+b-l;
        //cout<<k;
    }
}
        
