//
// Created by Olcay Taner YILDIZ on 6.05.2023.
//

#ifndef GRAPH_PUZZLE_GAME_ECEMOZBIYIK_SET_H
#define GRAPH_PUZZLE_GAME_ECEMOZBIYIK_SET_H


class Set {
private:
    int data;
    int parent;
    int depth;
public:
    Set(int data, int index);
    Set();
    int getParent() const;
    int getDepth() const;
    void setParent(int parent);
    void incrementDepth();
};


#endif //DATASTRUCTURES_CPP_SET_H
