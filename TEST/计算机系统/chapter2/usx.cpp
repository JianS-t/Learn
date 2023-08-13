#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    short sx = -12345;
    unsigned short usx = sx;

    int x = sx;
    unsigned us = usx;
    cout << sx << " ";
    cout << usx << " ";
    cout << x << " ";
    cout << us << " ";
    return 0;
}
