    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
      int n=0;
      cin>>n;
      int ar[n],temp[n];
      for(int i=0;i<n;i++)
      cin>>ar[i];
      
      int q=0;
      cin>>q;
      while(q--)
      {
        for(int i=0;i<n;i++)
          temp[i]=ar[i];
          
          int a=0,b=0;
        cin>>a>>b;
        
        sort(temp+(a-1),temp+b);
        int sol=0,h=0;
        for(int i=a-1;i+1<b;i++)
        {
        h=pow((temp[i+1]-temp[i]),2);
        sol=sol+h;
        }
        cout<<sol<<endl;
      
    }
    } 

