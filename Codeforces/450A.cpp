#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, fin;
    double num, max(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (ceil(num / m) >= max)
        {
            fin = i;
            max = ceil(num / m);
        }
    }

    cout << fin << endl;
    return 0;
}