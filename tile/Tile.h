//
// Created by draia on 03/02/23.
//

#ifndef LABYRINTH_TILE_H
#define LABYRINTH_TILE_H


#include "../position/Position.h"

enum type
{
    EMPTY,
    WALL
};

class Tile
{
private:
    Position m_pos;
    type m_type;

public:
    explicit Tile(Position pos, type type);

    const Position &pos() const;

    const type getType() const;

    bool traversable();

};


#endif //LABYRINTH_TILE_H
