#include<iostream>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,m;
    ll l=1;
    cin >> n >> m;
    ll sum=0;
    for(int i=0; i<m; i++)
    {
        int now;
        cin >> now;
        if(now >= l)
        {
            sum = sum + (now-l);
            l=now;
        }
        else{
           sum = sum + n -(l-now);
           l = now;
        }
    }

    cout << sum <<endl;
    return 0;
}