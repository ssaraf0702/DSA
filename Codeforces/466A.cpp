#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,m,a,b;
    cin >> n >> m >> a >> b;

    int res;
    if(m*a>b)
    {
        int rem = (n%m)*a;
        if(rem > b)
        res = (n/m)*b + b;
        else
        res = (n/m)*b + rem;
    }
    else
     res = n*a;
     
    cout << res << endl;
    return 0;
}