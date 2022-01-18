#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ld t;
    cin >> t;

    while (t--)
    {
        ld n;
        cin >> n;

        ld p = cbrt(n);
        bool flag = 0;

        for (ld i = 1; i < p; i++)
        {
            ll m = i * i * i;
            ll r = n - m;
            ll b = cbrt(r);
          
            if (r + m == n and b*b*b + i*i*i == n)
            {
               
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}