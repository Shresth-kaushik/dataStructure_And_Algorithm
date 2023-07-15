#include <iostream>
#include<vector>
#include<queue>
#include<array>
using namespace std;

class Solution {
public:
	//Function to return list containing vertices in Topological order.
    // here we apply the indegree method => node with indegree 0 -> putted first in the queue;
    // In the dfs we use the stack and in bfs we use Queue;

	vector<int> topoSort(int V, vector<int> adj[])
	{    int indegree[V] ;
		 indegree[V] = {0};
        //to find out the indgree of the nodes :
		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
				indegree[it]++;
			}
		}

        // place the node in the queue whose indegree is zero :
		queue<int> q;
		for (int i = 0; i < V; i++) {
            // whose indegree is zero first put in the queue;
			if (indegree[i] == 0) {
				q.push(i);
			}
		}

		vector<int> topo;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			topo.push_back(node);

			// node is in your top o sort
			// so please remove it from the indegree
			for (auto it : adj[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}
		return topo;
	}
};


int main() {

	//V = 6;
	vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	Solution obj;
	vector<int> ans = obj.topoSort(V, adj);

	for (auto node : ans) {
		cout << node << " ";
	}
	cout << endl;

	return 0;
}