#include<bits/stdc++.h>
using namespace std;
int main(){
	int t=0;
	cin>>t;
	
	int num1=1, k=0;
	vector<int>v,div2, div1;
	
	for(int i=0;i<t;i++){
	    cin>>k;
	    v.push_back(k);
	}
	
	sort(v.begin(), v.end());
	
	int num2 = v[t-1];
	
	for(int i=1;i<=num2;i++){
		if(num2%i==0){
			div2.push_back(i);
		}
	}

	sort(div2.begin(), div2.end());
	
	for(int i=0;i<div2.size();i++){
		for(int j=0;j<v.size();j++){
			if(div2[i]==v[j]){
				v[j]=0;
				break;
			}
		}
	}
	
	for(int i=0;i<v.size();i++){
		if(v[i]!=0){
		    div1.push_back(v[i]);
		}
	}
	
	sort(div1.begin(), div1.end());
	
	num1=div1[div1.size()-1];
	cout<<num1<<" "<<num2<<endl;
}
	
