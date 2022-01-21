#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    ll i,j,x;
    ll n,m;
    string s;
    cin>>n>>s;
    x=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
            x++;
        else
        {
            cout<<x;
            x=0;
        }
    }
    cout<<x;
    return 0;
}
