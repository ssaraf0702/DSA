#include<iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x;

    while(~scanf("%d", &x)) {
        int res = 0;

        if(!(x & 1)) {
            x >>= 1;
            --x;
            res = x >> 1;
        }

        cout << res << endl;
    }

    return 0;
}