//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef GRAPH_PUZZLE_GAME_ECEMOZBIYIK_MINHEAP_H
#define GRAPH_PUZZLE_GAME_ECEMOZBIYIK_MINHEAP_H


#include "Heap.h"

class MinHeap : public Heap{
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
public:
    explicit MinHeap(int N);
    void update(int k, int newValue) override;
};


#endif //DATASTRUCTURES_CPP_MINHEAP_H
