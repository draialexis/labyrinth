#include <iostream>
#include "position/Position.h"
#include "tile/Tile.h"

using namespace std;

int main()
{
    //////////////////////////
    /// positions
    //////////////////////////
    cout << Position(2, 5) << endl;
    cout << Position(-1, 9) << endl;
    cout << Position(0, 0) << endl;

    cout << Position(0, 0) + Position(1, 6) << endl;
    auto p1 = Position(8, 8);
    auto p2 = Position(4, 1);
    cout << p1 << endl;
    p1 += p2;
    cout << p1 << endl;

    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;

    p1 = Position(4, 1);

    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;

    /////////////////////////////
    /// tiles
    /////////////////////////////

    auto t1 = Tile(p1, EMPTY);

    cout << t1.pos() << " -- type: " << t1.getType() << " -- traversable?: " << t1.traversable() << endl;

    auto t2 = Tile(p2, WALL);

    cout << t2.pos() << " -- type: " << t2.getType() << " -- traversable?: " << t2.traversable() << endl;

    /*
     * lack of flexibility in dynamic memory management for Tiles. If we don't know the number of tiles at compile-time,
     * a fixed-size array is risky. Using vectors or linked lists, solves that problem, but we still have to manage
     * memory deallocation by hand.
     *
     * as for Tiles having a Position member, having separate x_pos and y_pos int values for each Tile would eliminate
     * the need for cting instances of Position.
     * and it would spare us from having to overload operators, although in our case we're actually trying to
     * practice that
     */

    return 0;
}
