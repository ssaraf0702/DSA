#include<iostream>
#include <cstdio>

using namespace std;


int main()
{
    int n, x , idx[100001];
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        idx[x] = i;
    }

    int m, b;
    cin >> m;
    long long Vasya(0), Petya(0);
    while (m--)
    {
        cin >> b;
        Vasya += idx[b];
        Petya += (n + 1 - idx[b]);
    }
    cout << Vasya << " " << Petya;
    return 0;
}