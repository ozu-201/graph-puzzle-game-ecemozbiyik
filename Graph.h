//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef GRAPH_PUZZLE_GAME_ECEMOZBIYIK_GRAPH_H
#define GRAPH_PUZZLE_GAME_ECEMOZBIYIK_GRAPH_H


#include "EdgeList.h"
#include "AbstractGraph.h"

namespace list {

    class Graph : public AbstractGraph{
    private:
        EdgeList *edges;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void connectedComponentsDisjointSet();
        Path* bellmanFord(int source);
        Path* dijkstra(int source);
        void prim();
    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;
        void breadthFirstSearch(bool* visited, int startNode) override;
        Edge* edgeList(int& edgeCount) override;
    };

}
#endif //DATASTRUCTURES_CPP_GRAPH_H
