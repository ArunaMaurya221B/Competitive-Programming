    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int t=0;
        cin>>t;
        while(t--)
        {
            vector<int>v1,v2;
            int a=0;
            int count=0;
            int size=0;
            cin>>size;
            for(int i=0;i<size;i++)
            {
                cin>>a;
                v1.push_back(a);
            }
            for(int i=0;i<size;i++)
            {
                cin>>a;
                v2.push_back(a);
            }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            int i=0,j=0;
            while(i<size&&j<size)
            {
             if(v1[i] > v2[j]) 
             j++;
            else {i++; j++; count++;}
    }
            cout<<count<<endl;
        }
    }
            
            
             

