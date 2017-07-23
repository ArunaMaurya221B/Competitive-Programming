    #include <iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main() 
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            int s=0,a=0;
            cin>>s;
            vector<int>v,diff;
            for(int i=0;i<s;i++)
            {
                cin>>a;
                v.push_back(a);
            }
            vector<int>::iterator it;
            sort(v.begin(),v.end());
            for(int i=0;i+1<s;i++)
                diff.push_back(abs(v[i]-v[i+1]));
            sort(diff.begin(),diff.end());
            it=diff.begin();
            cout<<*it<<endl;
        }
    }
     

