http://codeforces.com/problemset/problem/231/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0, final=0, c=0;
    cin>>a;
    int ar[a][3];
    for(int i=0;i<a;i++){
        for(int j=0;j<3;j++){
            cin>>ar[i][j];
            if(ar[i][j]==1)
            c++;
        }
        if(c>=2)
        final++;
        c=0;
    }
    
    cout<<final;
}
