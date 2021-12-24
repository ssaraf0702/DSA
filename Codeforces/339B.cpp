#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int loc = 1;
    long long int sum = 0;
    for(int i=0; i<m; i++)
    {
        int now;
        cin >> now;

        if(now >= loc)
            sum += now - loc;
        else
            sum += n - (loc - now);
        loc = now;
    }

    cout << sum << endl;

    return 0;
}