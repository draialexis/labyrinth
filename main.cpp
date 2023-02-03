#include <iostream>
#include "position/Position.h"

using namespace std;

int main()
{
    cout << Position(2, 5) << endl;
    cout << Position(-1, 9) << endl;
    cout << Position(0, 0) << endl;

    cout << Position(0, 0) + Position(1, 6) << endl;
    auto p1 = Position(8, 8);
    auto p2 = Position(4, 1);
    cout << p1 << endl;
    p1 += p2;
    cout << p1 << endl;

    return 0;
}
