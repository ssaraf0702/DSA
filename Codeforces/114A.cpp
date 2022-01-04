#include <iostream>

using namespace std;

int main()
{
    int n, l, imp(-1);
    cin >> n >> l;
    while (l % n == 0)
    {
        l /= n;
        imp += 1;
    }
    if (imp >= 0 && l == 1)
    {
        cout << "YES" << endl << imp << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}