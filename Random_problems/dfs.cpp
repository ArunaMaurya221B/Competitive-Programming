
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0, a=0, b=0, pairs=0;
	
	cout<<"Enter the number of nodes: "<<endl;
	cin>>n;
	
	int ar[n][n];
	
	cout<<"Enter the number of pairs:"<<endl;
	cin>>pairs;
	
	cout<<"Enter the node pairs now"<<endl;
	for(int i=0;i<pairs;i++){
		cin>>a>>b;
		ar[a-1][b-1]=0;
		ar[a-1][b-1]=1;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int src=0;
	
	cout<<"Enter the source vertex: "<<endl;
	cin>>src;
	stack<int>s;
	int visited[n];
	
	//pushing the source vertex
	s.push(src);
	
	visited[src-1]=1;
	while(!s.empty()){
		//taking the top element
		int top = s.top();
		cout<<top<<" ";
		//pop the top element to insert children
		s.pop();
		
		//to insert children and change the visited array
		for(int i=0;i<n;i++){
			//which means that an edge exists
			if(ar[top-1][i]){
				if(!visited[i+1]){
					s.push(i+1);
					visited[i+1]=1;
					//cout<<i+1<<" ";
				}
			}
		}
	}
	
}
			
