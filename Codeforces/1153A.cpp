#include<iostream>
typedef long long ll;

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    ll a[n+1], b[n+1];
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
    }
    ll minn = 1e15, pos = 1;
    for(int i=0; i<n; i++)
    {
        while(a[i]<t)
        {
            a[i] = a[i] + b[i];
        }
        ll ans = a[i];
        while(ans<minn)
        {
            minn = ans;
            pos = i+1;
        }
    }  

    cout << pos << endl;

    return 0;
}