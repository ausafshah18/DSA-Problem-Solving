/*  Graph Adjacency List implementation  */
#include <bits/stdc++.h> 
using namespace std; 

void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v); //  u index pe jo vector hai usmein v push back.
    adj[v].push_back(u); //  v index pe jo vector hai usmein u push back. /*yai line isiliyai hai kyunki like agar vertex one has connection with vertex 2, so vertex 2 has connection with vertex 1. Aggar line 7 sirf likhengai aur line 8 nhi toh aisay har node ka ulta bhe mention karna hai. */
}

int main()
{
    int v = 4; // 4 vertices. See graph on copy 
    vector <int> adj[v]; // array of vectors.
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
}