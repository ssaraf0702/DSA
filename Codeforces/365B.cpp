#include<bits/stdc++.h>

typedef long long int ll;


using namespace std;

int main()
{
    ll i;
    ll n,mx,c;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    if(n<=2)
    {
        cout<<n;
        return 0;
    }

    i=0;mx=0;c=2;
    while(i<n-2)
    {
        if(a[i]+a[i+1]==a[i+2])
            c++,i++;

        else
        {
            mx=max(mx,c);
            c=2;i++;
        }
    }

    mx=max(mx,c);
    cout<<mx;

    return 0;
}