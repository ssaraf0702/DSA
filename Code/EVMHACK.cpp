#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a,b,c,p,q,r;
        cin >> a >> b >> c >> p >> q >> r;
        int mx  = max((p-a),max((q-b),(r-c)));
        int winv = ceil((p+q+r)/2);
        if( a + b + c + mx > winv)
        {
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}