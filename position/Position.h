//
// Created by draia on 03/02/23.
//

#ifndef LABYRINTH_POSITION_H
#define LABYRINTH_POSITION_H

#include <iostream>


class Position final
{
private:
    int m_x_pos, m_y_pos;
public:
    explicit Position(int x_pos, int y_pos);

    const int &x_pos() const;

    const int &y_pos() const;

    bool operator==(const Position &rhs) const;

    bool operator!=(const Position &rhs) const;

    Position &operator+=(const Position &rhs);

    friend Position operator+(Position lhs, const Position &rhs);

    friend std::ostream &operator<<(std::ostream &os, const Position &pos);
};


#endif //LABYRINTH_POSITION_H
