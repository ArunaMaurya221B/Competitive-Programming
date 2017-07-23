    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int ce=0,co=0;
        int t=0;
        cin>>t;
        int ar[t];
        for(int i=0;i<t;i++)
        {
        cin>>ar[i];
        if(ar[i]%2==0)
        ce++;
        else
        co++;
        }
        cout<<abs(ce-co)<<endl;
        
    	// your code goes here
    	return 0;
    }
     