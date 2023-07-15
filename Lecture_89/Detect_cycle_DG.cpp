/*
T.C O(n+m);

We are given with edges and the number of node => we have to Detect isCycle present in Directed graph 
or not :

// Code :
private:
bool dfs(int node ,unordered_map<int,bool>&visited, unordered_map<int,bool>&pathvisited,
unordered_map<int ,unordered_map<int ,list<int>>&adj )
{
    visited[node]= 1;
    pathvisited[node]= 1;
   
   for(auto neig : adj[node])
   {
    if(!visited[neig])
    {
       if(dfs(neig, visited , pathvisited , adj ))
       return true;
    }

    else if(pathvisited[neig])
    {
        // Not visited :
        return true ;
    } 

   }
return false;
}


public:
int DetectCycle(int n , vector<pair<int,int>> &edges)
{
    // As the edges are given so first make the adj list :
    unordered_map<int ,list<int>>adj;

    for(int i=0 ;i<edges.size();i++)
    {
        int u=edge[i].first;
        int v = edge[i].second;

        adj[u].push_back(v);
    
    }
//  DFS call for the graph and its components :

unordered_map<int,bool>visited;
unordered_map<int,bool>pathvisited;

for(int i=1 ; i<= n ;i++)
{ 
    if(!visited[i])
    {
        if(dfs(i,visited,pathvisited,adj)==true)
        return true;
    }
}
return false;


}

*/