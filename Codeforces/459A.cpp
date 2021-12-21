#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int xdiff = x1 - x2;
    int ydiff = y1 - y2;

    if (xdiff != 0 and ydiff != 0)
    {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    else if (xdiff != 0)
    {
        x3 = x1;
        y3 = y1 + abs(xdiff);
        x4 = x2;
        y4 = y2 + abs(xdiff);
    }
    else
    {
        x3 = x1 + abs(ydiff);
        y3 = y1;
        x4 = x2 + abs(ydiff);
        y4 = y2;
    }

    if (xdiff != 0 and ydiff != 0 and abs(xdiff) != abs(ydiff))
        cout << -1 << endl;
    else
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}