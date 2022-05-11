#include<iostream>
typedef long long ll;
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {

        ll n,nv=0,pos=0;
        cin >> n;
        ll res = 0;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            if(x<0)
            {
                nv++;
            }
            if(x>0)
            {
                pos++;
            }        
        }
        if(pos > 1)
        {
            res = res + int((pos*(pos-1))/2);
        }
        if(nv > 1)
        {
            res = res + int((nv*(nv-1))/2);
        }
        cout << res << endl;
    }
    return 0;

}