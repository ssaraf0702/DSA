#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        ll N;
        cin >> N;
        map<ll, ll> H;
        for(ll i=0; i<N; i++)
        {
            ll x;
            cin >> x;   
            H[x]++;
        }
        ll res = INT_MIN;

        for(auto i: H)
        {
            res = max(res, (i.first + (i.second - 1)));
        }
        cout << res <<endl;
    }

    return 0;
}

