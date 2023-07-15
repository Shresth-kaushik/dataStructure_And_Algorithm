#include <iostream>
#include <vector>

using namespace std;

class DisjointSet {
    vector<int> parent;
    vector<int> size;

public:
    DisjointSet(int n) {
        parent.resize(n);
        size.resize(n+1, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;  // Initialize each element as a separate set
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);  // Path compression
        }
        return parent[x];
    }

// Union by size :
    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY)
            return;

        if (size[rootX] < size[rootY]) {
            parent[rootX] = rootY;
            size[rootY] += size[rootX];
        } 
        else {
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
        }
    }
};

// We can also check that Is the 2 node belong to same component or not In Constant Time :

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
