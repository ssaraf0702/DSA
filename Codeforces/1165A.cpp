#include <bits/stdc++.h>
using namespace std;
char str[200005];

int main (void)
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,i,x,y,ans;

    while (scanf ("%d %d %d\%s",&n,&x,&y,str) != EOF)
    {
        ans = 0;

        for (i=n-1; i>=n-x; i--)
        {
            if (i == n-y-1)
            {
                if (str[i] == '0')
                    ++ans;
            }
            else
            {
                if (str[i] == '1')
                    ++ans;
            }
        }

        cout << ans <<endl;
    }

    return 0;
}