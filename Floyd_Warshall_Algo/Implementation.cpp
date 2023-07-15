#include <iostream>
#include <climits>
using namespace std;

#define V 4  // Number of vertices

// Function to print the shortest distance matrix
void printSolution(int dist[][V]) {
    cout << "Shortest distance between every pair of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INT_MAX)
                cout << "INF\t";
            else
                cout << dist[i][j] << "\t";
        }
        cout << endl;
    }
}

// Floyd-Warshall algorithm implementation
void floydWarshall(int graph[][V]) {
    int dist[V][V];  // Output matrix to store the shortest distances
    
    // Initialize the distance matrix with the graph values
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    }
    
    // Update the distance matrix by considering all vertices as intermediate vertices
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                // If vertex k is on the shortest path from i to j, update the distance
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX
                    && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
    // Print the shortest distance matrix
    printSolution(dist);
}

int main() {
    // Example graph with weighted edges
    int graph[V][V] = {{0, 5, INT_MAX, 10},
                       {INT_MAX, 0, 3, INT_MAX},
                       {INT_MAX, INT_MAX, 0, 1},
                       {INT_MAX, INT_MAX, INT_MAX, 0}};
    
    // Run the Floyd-Warshall algorithm
    floydWarshall(graph);
    
    return 0;
}
