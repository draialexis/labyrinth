//
// Created by draia on 06/02/23.
//

#include <random>
#include "Labyrinth.h"

using namespace std;

random_device dev;
mt19937 rng(dev());
uniform_int_distribution<std::mt19937::result_type> dist3(0, 2); // 0, 1, 2

Labyrinth::Labyrinth(int max_rows, int max_cols)
        : m_max_rows(max_rows), m_max_cols(max_cols)
{
    for (int i = 0; i < max_rows; ++i)
    {
        for (int j = 0; j < max_cols; ++j)
        {
            auto pos = Position(i, j);

            auto tile = new Tile(
                    pos,
                    dist3(rng) == 0 ? WALL : EMPTY
            );
            board.insert(pair<Position, Tile *>(pos, tile));
        }
    }
}

Tile *Labyrinth::at(Position pos)
{
    if (0 > pos.x_pos()
        || pos.x_pos() >= m_max_rows
        || 0 > pos.y_pos()
        || pos.y_pos() >= m_max_cols
        || board[pos] == nullptr)
    {
        throw;
    }
    return board[pos];
}

//const Tile *Labyrinth::operator[](Position pos) const
//{
//    return board[pos];
//}

Tile *Labyrinth::operator[](Position pos)
{
    return at(pos);
}