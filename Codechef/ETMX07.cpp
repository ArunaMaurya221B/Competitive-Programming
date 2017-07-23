    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        string s;
        getline(cin,s);
        long long int l=s.length();
        long long int i=0,j=l-1;
        while(i<l)
        {
           // cout<<i<<" "<<j;
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            break;
        }
       // cout<<i;
            for(j=0;j<=i-1;j++)
            cout<<s[j];
    } 
 