#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int xy, yz, zx;
    cin >> xy >> yz >> zx;
    int x = sqrt(xy * zx / yz + 0.5);
    int y = sqrt(yz * xy / zx + 0.5);
    int z = sqrt(zx * yz / xy + 0.5);
    cout << (x + y + z) * 4 << endl;
    return 0;
}
