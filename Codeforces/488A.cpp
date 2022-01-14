#include<iostream>
#include<stdio.h>
#include<math.h>

#define ll long long

using namespace std;
ll absol(ll n)
{
    if(n < 0)
        return (n * -1);
    else
        return n;

}
int checkp(ll n)
{
    ll x, y = 0;
    while(n > 0)
    {
        x = n % 10;
        n = n / 10;
        if(x == 8)
        {
            y = 1;
            break;
        }
    }
    if(y == 1)
        return 1;
    else
        return 0;
}
int main()
{
    ll t, n, i, res;
    cin >> n;
    res = 1;
    for(i = n + 1;;i++)
    {
        if(checkp(absol(i)))
        {
            cout << res << endl;
            break;
        }
        else
            res++;
    }

    return 0;

}