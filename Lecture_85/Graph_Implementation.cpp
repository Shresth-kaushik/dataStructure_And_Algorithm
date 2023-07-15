#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T>

class graph
public:

unordered_map<int,list<int> >adj;

// Insertion function
void addEdge(T u ,T v , bool direction)
{
// direction == 0 UNDIRECTED GRAPH 
// direction = 1 Directed Graph 

// Create the edge between u and v :
adj[u].push_back(v);

if(direction == 0)
{
    adj[v].push_back(u);
}
}

void printAdj()
{
    for(auto i : adj)
    {
        cout<<i.first<<"->";
        
        for(auto j: i.second)
        {
            cout<< j<<",";
        }
        cout<<endl;
    }
}

};

int main()
{

int n;
cout<<"Enter the no. of nodes"<<endl;
cin>>n;

int m;
cout<<"Enter the no. of the edged"<<endl;
cin>>m;

graph<int> g;
 
for(int i=0;i<m ;i ++)
{
    int u,v;
    cin>>u>>v;
    // Creating the undirected graph;
    g.addEdge(u,v,0);
}

// Printing the graph
g.printAdj();
    return 0;
}

/*

Pros: Saves space O(|V|+|E|). In the worst case, there can be C(V, 2) number of edges in a graph thus 
consuming O(V^2) space. Adding a vertex is easier. Computing all neighbors of a vertex takes optimal time.
Cons: Queries like whether there is an edge from vertex u to vertex v are not efficient and can be done O(V).
 In Real-life problems,  graphs are sparse(|E| <<|V|2). That’s why adjacency lists Data structure is commonly 
 used for storing graphs . Adjacency matrix will enforce (|V|2) bound on time complexity for such algorithms. 
*/