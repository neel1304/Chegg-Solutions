#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int>adj[], int V)
{
	for(int i=0;i<5;i++)
	{
		cout<<"For node "<<i<<" Edges connected are as follows"<<endl<<i<<"";
		for(int j=0;j<adj[i].size();j++)
		{
			cout<<" -> "<<adj[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" ,stdin);
	freopen("output.txt", "w" ,stdout);
	#endif
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 2);
	addEdge(adj, 0, 3);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	printGraph(adj,V);
	return 0;
}