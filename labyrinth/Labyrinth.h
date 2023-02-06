//
// Created by draia on 06/02/23.
//

#ifndef LABYRINTH_LABYRINTH_H
#define LABYRINTH_LABYRINTH_H


#include <map>
#include "../position/Position.h"
#include "../tile/Tile.h"

class Labyrinth
{
private:
    int m_max_rows;
    int m_max_cols;
    std::map<Position, Tile *> board;

    Tile * at(Position pos);

public:
    Labyrinth(int max_rows, int max_cols);


    Tile *operator[](Position pos);

//    const Tile *operator[](Position pos) const;
};


#endif //LABYRINTH_LABYRINTH_H
