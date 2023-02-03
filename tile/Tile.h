//
// Created by draia on 03/02/23.
//

#ifndef LABYRINTH_TILE_H
#define LABYRINTH_TILE_H


#include "../position/Position.h"

class Tile
{
private:
    Position m_pos;
public:
    const Position &pos() const;

};


#endif //LABYRINTH_TILE_H
