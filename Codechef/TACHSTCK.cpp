    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
      int a=0,b=0,c=0;
      cin>>a>>b;
      int ar[a];
      for(int i=0;i<a;i++)
      cin>>ar[i];
      sort(ar,ar+a);
      for(int i=0;i+1<a;i++)
      {
        if(ar[i+1]-ar[i]<=b)
        {
          c++;
          i++;
        }
      }
      cout<<c<<endl;
    }
     