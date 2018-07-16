    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int r=0, c=0;
        cin>>r>>c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if((i==0||i==r-1)||(j==0||j==c-1)){
                    cout<<"X";
                }
                else{
                    cout<<"+";
                }
            }
            cout<<endl;
        }
    } 
