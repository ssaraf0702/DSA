#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;

int main(){
     ll t;
     cin >> t;
    while(t--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a<=b)
        {
            cout << b << endl;
        }
        else if(c <= d)
        {
            cout << -1 << endl;
        }
        else{
            ll diff = c-d;
            ll cnt;
            a = a-b;
            if(a%diff == 0)
            {
              cnt = (a/diff);
            }
            else
            {
                cnt = (a/diff) + 1;
            }
            //cnt = b + ((a + c - d - 1) / (c - d) * c);
            //cout << cnt <<endl;
            cout << (b + (cnt*c)) <<endl;
        }
    }
     return 0;
}