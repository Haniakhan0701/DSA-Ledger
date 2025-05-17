//DFS.cpp — performing Depth-First Search on a graph represented by adjacency lists
#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

    void DFSUtil(int v, vector<bool> &visited) {
        visited[v] = true;
        cout << v << " ";

        for (int nbr : adj[v]) {
            if (!visited[nbr]) {
                DFSUtil(nbr, visited);
            }
        }
    }

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

    void DFS(int start) {
        vector<bool> visited(V, false);
        cout << "DFS starting from vertex " << start << ": ";
        DFSUtil(start, visited);
        cout << endl;
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.DFS(0);

    return 0;
}
//commands to run on bash
//g++ DFS.cpp -o DFS
//./DFS

