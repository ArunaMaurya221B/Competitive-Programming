    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int flag=0;
    	// your code goes here
    	string s1,s2,s3;
    	cin>>s1>>s2>>s3;
    	int l1=s1.length();
    	int l2=s2.length();
    	
        int count[30];
        
        for(int i=0;i<30;i++)
        count[i]=0;
        
        for(int i=0;i<l1;i++)
        count[s1[i]-65]++;
        
        for(int i=0;i<l2;i++)
        count[s2[i]-65]++;
        
         //for(int i=0;i<30;i++)
        //cout<<count[i]<<" ";
        
        
        int countf[30];
        
        for(int i=0;i<30;i++)
        countf[i]=0;
        for(int i=0;i<s3.length();i++)
        countf[s3[i]-65]++;
        
            for(int i=0;i<30;i++)
            {
            if(count[i]==countf[i])
            continue;
            else
            {
                flag=-1;
                break;
            }
        }
       if(flag==-1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        } 

