// Implementation of the kruskal's Algorithm => finding the minimum spanning tree in the graph 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;

    Edge(int s, int d, int w) : src(s), dest(d), weight(w) {}
};

// Structure to represent a disjoint set
struct DisjointSet {
    vector<int> parent, rank;

    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY)
            return;

        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
};

// Comparison function for sorting edges by weight in non-decreasing order
bool compareEdges(const Edge& e1, const Edge& e2) {
    return e1.weight < e2.weight;
}

// Kruskal's algorithm to find the minimum spanning tree
vector<Edge> kruskalMST(vector<Edge>& edges, int n) {
    // Sort the edges in non-decreasing order of weight
    sort(edges.begin(), edges.end(), compareEdges);

    vector<Edge> mst;  // Minimum spanning tree
    DisjointSet ds(n);

    for (const Edge& edge : edges) {
        int src = edge.src;
        int dest = edge.dest;
        int weight = edge.weight;

        // Check if including this edge forms a cycle in the MST
        if (ds.find(src) != ds.find(dest)) {
            // Add the edge to the MST
            mst.push_back(Edge(src, dest, weight));
            ds.unionSets(src, dest);
        }
    }

    return mst;
}

int main() {
    int n = 4;  // Number of vertices

    // Example graph with 4 vertices and 5 edges
    vector<Edge> edges = {
        Edge(0, 1, 10),
        Edge(0, 2, 6),
        Edge(0, 3, 5),
        Edge(1, 3, 15),
        Edge(2, 3, 4)
    };

    vector<Edge> mst = kruskalMST(edges, n);

    // Print the minimum spanning tree
    cout << "Minimum Spanning Tree:" << endl;
    for (const Edge& edge : mst) {
        cout << edge.src << " -- " << edge.dest << "   Weight: " << edge.weight << endl;
    }

    return 0;
}
