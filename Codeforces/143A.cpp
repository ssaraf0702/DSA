#include <iostream>

using namespace std;

int main()
{
    int R1, R2, C1, C2, D1, D2;
    cin >> R1 >> R2 >> C1 >> C2 >> D1 >> D2;
    int a11 = (R1 + C1 - D2) / 2;
    int a12 = R1 - a11;
    int a21 = C1 - a11;
    int a22 = D1 - a11;
    if (a11 != a12 && a11 != a21 && a11 != a22 && a12 != a21 && a12 != a22 && a21 != a22
        && a11 >= 1 && a11 <= 9
        && a12 >= 1 && a12 <= 9
        && a21 >= 1 && a21 <= 9
        && a22 >= 1 && a22 <= 9
        && a21 + a22 == R2
        && a12 + a22 == C2
        && a12 + a21 == D2)
    {
        cout << a11 << " " << a12 << endl;
        cout << a21 << " " << a22 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}