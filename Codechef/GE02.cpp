#include <string>
#include<algorithm>
using namespace std;
int main()
{
 string s,s1;
cin>>s;
s1=s;
reverse(s.begin(),s.end());
if(s==s1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
 
