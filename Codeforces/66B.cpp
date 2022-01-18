#include <cstdio>
#include<iostream>

using namespace std;
int main()
{
    int n, ht[1000], lt[1000] = {0}, rt[1000] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> ht[i];
    }

    for (int i = 1; i < n; ++i)
    {
        lt[i] = (ht[i] >= ht[i-1] ? lt[i-1] + 1 : 0);
    }
    for (int i = n - 2; i >= 0; --i)
    {
        rt[i] = (ht[i] >= ht[i+1] ? rt[i+1] + 1 : 0);
    }

    int maxi(0);
    for (int i = 0; i < n; ++i)
    {
        if (lt[i] + rt[i] + 1 > maxi)
        {
            maxi = lt[i] + rt[i] + 1;
        }
    }
    cout << maxi << endl;
    return 0;
}