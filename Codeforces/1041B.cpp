#include <iostream>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a,b,x,y,cnt =0;
    cin >> a >> b >> x >> y;
    ll h,w;
    ll hcf = __gcd(x,y);
    h=(x/hcf);
    w=(y/hcf);
    cout << min(a/h,b/w) << endl;
    return 0;
}