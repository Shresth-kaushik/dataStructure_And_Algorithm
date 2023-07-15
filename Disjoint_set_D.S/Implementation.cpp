// n this code, we represent each set as a tree. The parent vector keeps track of the parent of each element, and initially, each element is its own parent (i.e., it is the root of its own tree). The rank vector is used to optimize the unionSets operation by attaching the smaller tree to the root of the larger tree.

// The find operation returns the root of the tree to which the element x belongs. It uses path compression to optimize future find operations by updating each element's parent to the root of the set. This ensures that subsequent find operations have a shorter path to traverse.

// The unionSets operation merges two sets together. It finds the roots of the sets to which elements x and y belong. If the roots are the same, it means that x and y are already in the same set, so we return. Otherwise, we attach the smaller tree (based on the rank) to the root of the larger tree. If the ranks of both roots are the same, we increment the rank of the new root by one.

// Here's an example usage of the Disjoint Set data structure in C++:

// Implementation by rank 
#include <vector>
class DisjointSet {
private:
    std::vector<int> parent;
    std::vector<int> rank;

public:
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            // Path compression: set x's parent to the root of the set
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY) {
            return;
        }

        // Union by rank: attach the smaller tree to the root of the larger tree
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


#include <iostream>

int main() {
    // Create a DisjointSet with 5 elements: {0, 1, 2, 3, 4}
    DisjointSet ds(5);

    // Perform some union operations
    ds.unionSets(0, 2);
    ds.unionSets(4, 2);
    ds.unionSets(3, 1);

    // Find the set to which an element belongs
    std::cout << ds.find(0) << std::endl;  // Output: 4
    std::cout << ds.find(3) << std::endl;  // Output: 1
    std::cout << ds.find(2) << std::endl;  // Output: 4

    return 0;
}