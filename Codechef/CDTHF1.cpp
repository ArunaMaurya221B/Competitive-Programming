    #include <iostream>
    using namespace std;
     
    int main() {
    	// your code goes here
    	int t=0;
    	cin>>t;
    	while(t--)
    	{
    	    int a=0;
    	    cin>>a;
    	    string s;
    	    cin>>s;
    	    for(int i=0;i<a;i++)
    	    {
    	        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    	        continue;
    	        else
    	        cout<<s[i];
    	   }
    	    cout<<endl;
    	}
    	return 0;
    }
     
