    #include <iostream>
    using namespace std;
     
    int main() {
        int n=0,k=0;
        cin>>n>>k;
                int ar[n];
            for(int i=0;i<n;i++)
            ar[i]=0;
        while(k--)
        {
            
            int q=0,c=0;;
            string s;
            cin>>s;
            
            if(s=="CLICK")
            {
                cin>>q;
               if(ar[q-1])
                ar[q-1]=0;
                else
                ar[q-1]=1;
            }
            else
            {
            for(int i=0;i<n;i++)
            ar[i]=0;
            }
            for(int i=0;i<n;i++)
            {
                if(ar[i]==1)
                c++;
           }
            cout<<c<<endl;
            
            
             }
    	// your code goes here
    	return 0;
    }
     

