//
// Created by draia on 03/02/23.
//

#include "Position.h"

using namespace std;

Position::Position(int x_pos, int y_pos)
        : m_x_pos(x_pos), m_y_pos(y_pos)
{}

std::ostream &operator<<(ostream &os, const Position &pos)
{
    os << "⁅ " << pos.m_x_pos << " ; " << pos.m_y_pos << " ⁆";
    return os;
}

Position &Position::operator+=(const Position &rhs)
{
    m_x_pos += rhs.m_x_pos;
    m_y_pos += rhs.m_y_pos;
    return *this;
}

Position &Position::operator+(const Position &rhs)
{
    *this += rhs;
    return *this;
}

bool Position::operator==(const Position &rhs) const
{
    return m_x_pos == rhs.m_x_pos
           && m_y_pos == rhs.m_y_pos;
}

bool Position::operator!=(const Position &rhs) const
{
    return !(*this == rhs);
}

const int &Position::x_pos() const
{
    return m_x_pos;
}

const int &Position::y_pos() const
{
    return m_y_pos;
}
