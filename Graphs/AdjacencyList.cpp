//AdjacencyList.cpp — implementing a graph using adjacency lists
#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V;                      // Number of vertices
    vector<vector<int>> adj;    // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v, bool directed = false) {
        adj[u].push_back(v);
        if (!directed) {
            adj[v].push_back(u);
        }
    }

    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << i << ": ";
            for (int nbr : adj[i]) {
                cout << nbr << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5); // create a graph with 5 vertices

    // Adding edges (undirected graph by default)
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Adjacency List representation:" << endl;
    g.printGraph();

    return 0;
}//commands to run
// $ g++ AdjacencyList.cpp -o AdjacencyList
//./AdjacencyList
