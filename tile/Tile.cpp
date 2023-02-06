//
// Created by draia on 03/02/23.
//

#include "Tile.h"

const Position &Tile::pos() const
{
    return m_pos;
}

Tile::Tile(Position pos, enum type type)
        : m_pos(pos), m_type(type)
{}

const type Tile::getType() const
{
    return m_type;
}

bool Tile::traversable()
{
    return m_type == 0; // EMPTY
}

