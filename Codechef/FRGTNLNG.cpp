#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        vector<string>v_words, v_dict, v_result;
        string s;
        int k=0;
        int a=0, b=0;
        cin>>a>>b;
        
        for(int i=0;i<a;i++){
            cin>>s;
            v_words.push_back(s);
        }
        string p;
        int i=0;
        while(b--){
            cin>>k;
            while(k--){
                cin>>p;
                v_dict.push_back((p));
                i++;
            }
        }

        int j=0;
        for(int i=0;i<v_words.size();i++){
            string item = v_words[j];
            j++;
            if(find(v_dict.begin(), v_dict.end(), item) != v_dict.end()){
            v_result.push_back("YES");
            }
            else{
            v_result.push_back("NO");
            }
        } 
        for(int i=0;i<v_words.size();i++)
            cout<<v_result[i]<<" ";
        cout<<endl;
         
    }
}