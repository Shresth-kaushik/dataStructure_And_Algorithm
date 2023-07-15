#include <iostream>
#include <vector>

using namespace std;

class DisjointSet {
    vector<int> parent;
    vector<int> rank;

public:
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;  // Initialize each element as a separate set
        }
    }
// find parent function
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);  // Path compression
        }
        return parent[x];
    }

// union by rank :
    void unionSets(int x, int y) {
        // ultimate parent of the x;
        int rootX = find(x);

        // ultimate parent of the y;
        int rootY = find(y);

// if they have same ultimate parent then return :
        if (rootX == rootY)
            return;

//  rank  of the ultimate parent  x is less than y ==> then join the smaller one to the larger 
// So the parent of the ultimate parent of the x is (ultimate parent of the y);
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } 
        
        // if the rank of the ultimate parent of X is greater than Y then ==> 
        // parent of the ultimate parent of the Y is => (ultimate parnet of the X);
        else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } 
        // Attach any one to any one :
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
};

int main() {
    int n = 5;  // Number of elements
    DisjointSet ds(n);

    ds.unionSets(1, 2);
    ds.unionSets(2, 3);
    ds.unionSets(4, 5);
    ds.unionSets(1, 4);

    // Find the sets of elements
    for (int i = 0; i < n; i++) {
        cout << "Set of element " << i << ": " << ds.find(i) << endl;
    }

    return 0;
}
