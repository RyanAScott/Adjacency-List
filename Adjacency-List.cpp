// Adjacency-List.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This is a learning of an adjacency list
// Using tutorial https://www.youtube.com/watch?v=dhgKr8942rs

#include <iostream>
#include <list>
using namespace std;

class Graph {
    int V;
    // Array of Lists
    list<int> *l;// pointer to an array of lists
    // = new list[V]

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x, int y) {
        l[x].push_back(y);
        l[y].push_back(x);
        // it's a criss cross
    }

    void printAdjList() {
        // iterate over all the vertices
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << "->";
            // prints out all the neighbors
            for (int nbr:l[i]) {
                cout << nbr << ",";
            }
            cout << endl;
        }
    }

};

int main()
{
    Graph g(4);
    // important to note, these are bidirectional edges
    // I need a directed graph, not a bidirected one
    // Figure out how to make the graph directional
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(1, 2);

    g.printAdjList();

    return 0;
}


