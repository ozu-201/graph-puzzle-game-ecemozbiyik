//
// Created by Olcay Taner YILDIZ on 27.03.2023.
//

#ifndef GRAPH_PUZZLE_GAME_ECEMOZBIYIK_QUEUE_H
#define GRAPH_PUZZLE_GAME_ECEMOZBIYIK_QUEUE_H

#include "Node.h"

namespace list {

    class Queue {
    private:
        Node* first;
        Node* last;
    public:
        Queue();
        ~Queue();
        bool isEmpty();
        Node* dequeue();
        void enqueue(Node* newNode);
    };

}
#endif //DATASTRUCTURES_CPP_QUEUE_H
