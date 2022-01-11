#include <cstdio>
#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, spd[101], ram[101], hd[101], cst[101];
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin>> spd[i] >> ram[i] >> hd[i] >> cst[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (spd[i] < spd[j] && ram[i] < ram[j] && hd[i] < hd[j])
            {
                cst[i] = 1001; 
            }
        }
    }
        cout << (min_element(cst+1, cst+1+n) - cst) << endl;

    return 0;
}