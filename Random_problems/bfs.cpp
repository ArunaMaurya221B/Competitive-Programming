#include<bits/stdc++.h>
using namespace std;

vector<int>adj[10];
bool visited[10];

int main(){
	int nodes=0, edes=0, u=0, v=0;
	cout<<"Enter the number of nodes:"<<endl;
	cin>>nodes;
	cout<<"Enter the number of edges:"<<endl;
	cin>>edges;
	cout<<"Enter edges:"<<endl;
	for(int i=0;i<edges;i++){
		cin>>u>>v;
		adj[u-1].push_back(v-1);
	}
	cout<<"Inserting edges completed !"<<endl;
	
	for(int i=0;i<nodes;i++)
	visited[i]=false;
	
	for(int i=0;i<nodes;i++){
		for(int j=0;j<adj[i].size();i++){
			if(visited[i]==false){
				bfs(i);
			}
		}
	}
}

void bfs(int i){
	
}
		
		
