#include <cstdio>
#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);   
    int n, l, r, ml, mr, num(1);
    cin >> n >> ml >> mr;
    for (int i = 2; i <= n; ++i)
    {
        cin >> l >> r;
        if (l <= ml && r >= mr)
        {
            num = i;
        }
        else if (l < ml || r > mr)
        {
            num = -1;
        }
        ml = min(ml, l);
        mr = max(mr, r);
    }
    cout << num <<endl;
    return 0;
}
