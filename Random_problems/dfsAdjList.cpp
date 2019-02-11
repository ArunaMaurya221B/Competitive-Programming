#include<bits/stdc++.h>
using namespace std;
#define N 10

vector<int>adj[N];
bool visited[N];
	
void dfs(int i){
	visited[i]=true;
	cout<<i<<" ";
	for(int j=0;j<adj[i].size();j++){
		if(visited[adj[i][j]]==false){
			dfs(adj[i][j]);
		}
	}	
}
int main(){
	int nodes=0, edges=0, u=0, v=0;
	cout<<"Enter no of nodes:"<<endl;
	cin>>nodes;
	
	cout<<"Enter no of edges:"<<endl;
	cin>>edges;
		
	cout<<"Enter edges:"<<endl;
	
	

	for(int i=0;i<edges;i++){
		cin>>u>>v;
		adj[u-1].push_back(v-1);
	}
/*	
	for(int i=0;i<7;i++){
		for(int j=0;j<adj[i].size();j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
*/
	for(int i=0;i<7;i++)
	visited[i]=false;
	
	
	for(int i=0;i<7;i++){
		if(visited[i]==false){
		dfs(i);
		}
	}
}
