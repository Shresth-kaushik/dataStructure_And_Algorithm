#include<iostream>
using namespace std;
int main()
{

    // Take input of the node and edges :
    int n,m;
    cin>>n >> m;

    // Adjacency matrix :
    int adj[n+1][m+1];

// Store the graph in the form of the adj matrix :

    for(int i=0;i<m;i++)
    {
// Take the input of the edges between the node :

    int u,v;
    cin>>u>>v;
    
    adj[u][v]=1;
    adj[v][u]=1;

    }
    return 0;
}


// ------------  > LIST IMPLEMENTATION < --------------

/*

int main()
{
    int node(n) , edge(m);
    cin>>n>>m;

    vector<int>adj[n+1];
    for(int i=0; i< m;i++)
    {
        int u ,v;
        //  if directed graph there is only edge between u ---> v;

        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
}

*/