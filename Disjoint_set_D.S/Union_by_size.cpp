#include <vector>
using namespace std;
class DisjointSet {
private:
    vector<int> parent;
    vector<int> size;

public:
    DisjointSet(int n) {
        parent.resize(n+1);
        size.resize(n+1);
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

        // Union by size: attach the smaller set to the root of the larger set
        if (size[rootX] < size[rootY]) {
            parent[rootX] = rootY;
            size[rootY] += size[rootX];
        } else {
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
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