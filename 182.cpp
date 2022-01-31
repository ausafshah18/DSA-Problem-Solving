/*  Count connected components using Depth first search in  undirected Graph   */
#include <bits/stdc++.h> 
using namespace std; 

void DFSRec(vector<int>adj[],int s,bool visited[])
{
    visited[s] = true;
    for(int u:adj[s])
    {
        if(visited[u] == false)
        {
            DFSRec(adj,u,visited);
        }
    }
}

int DFS(vector<int>adj[],int v,int s)
{
    bool visited[v];
    int count = 0;
    for(int i = 0;i < v;i++)
    {
        visited[i] = false;
    }
    for(int i = 0;i < v;i++)
    {
        if(visited[i] == false)
        {
            DFSRec(adj,i,visited);
            count++;
        }
    }
    return count;

}
void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int v=5;
	vector<int> adj[v];
	addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,3,4);

    cout << DFS(adj,v,0);
	return 0; 
} 
