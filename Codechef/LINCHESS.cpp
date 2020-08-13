#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t=0;
    cin>>t;
    
    while(t--){
      long long int n=0, k=0;
      cin>>n>>k;
      
      long long int pos[n];
      long int final_turns[n];
      long long int curr_turns=0, ans=-1, small=0;
      
      for(int i=0;i<n;i++){
          cin>>pos[i];
          int position = pos[i];
          
          if(k%position == 0){
              curr_turns = k/position;
          }
          else{
              curr_turns = -1;
          }
          final_turns[i] = curr_turns;
          
      }
      small=10000000000;
      
         for(int i=0;i<n;i++){
             //cout<<final_turns[i]<<" ";
             if(final_turns[i]<small && final_turns[i]>0){
                small=final_turns[i];
                ans=pos[i];
             }
             
         }
         
      
      cout<<ans<<endl;
      
    }
}
