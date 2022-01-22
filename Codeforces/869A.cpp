#include<iostream>
#include <cstdio>
#include <bitset>
using namespace std;

const int MAXN = 2000 + 3;
const int MAXX = 2e6 + 3;

int main()
{
    int n;
    cin >> n;

    bitset<MAXX> doesExist;
    int aa[MAXN], bb[MAXN];

    for(int i = 0; i < n; ++i) {
        scanf("%d", aa+i);
        doesExist[aa[i]] = true;
    }

    for(int i = 0; i < n; ++i) {
        scanf("%d", bb+i);
        doesExist[bb[i]] = true;
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            int r = aa[i] ^ bb[j];
            if(0 <= r and r < MAXX and doesExist[r])
                ++cnt;
        }
    }

    puts(cnt & 1? "Koyomi" : "Karen");

    return 0;
}