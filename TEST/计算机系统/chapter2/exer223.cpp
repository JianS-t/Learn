#include <iostream>

using std::cout;
using std::endl;

int fun1(unsigned word)
{
    return (int)((word << 24) >> 24);
}
int fun2(unsigned word)
{
    return ((int)word << 24) >> 24;
}

int main(int argc, char const *argv[])
{
    int w = 0x00000076, w2 = 0x87654321, w3 = 0x000000c9, w4 = 0xEDCBA987;
    cout << fun1(w) << " " << fun2(w) << endl;
    cout << fun1(w2) << " " << fun2(w2) << endl;
    cout << fun1(w3) << " " << fun2(w3) << endl;
    cout << fun1(w4) << " " << fun2(w4) << endl;
    return 0;
}
