#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b)//Fast GCD
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n+1);
        ll e=0,o=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            if(i%2)
                e=gcd(e,v[i]);
            else
                o=gcd(o,v[i]);
        }
        
        int f=0;
        for(int i=2;i<=n;i+=2)
        {
            if(v[i]%e==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<e<<endl;
            continue;
        }
        
        int f1=0;
        for(int i=1;i<=n;i+=2)
        {
            if(v[i]%o==0)
            {
                f1=1;
                break;
            }
        }
        if(f1==0)
        {
            cout<<o<<"\n";
            continue;
        }
        
        cout<<0<<"\n";
        
    }
}