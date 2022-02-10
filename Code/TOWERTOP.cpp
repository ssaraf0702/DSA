#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        ll x,m,i;
        ll p=1, flag=0;
        cin >> x  >> m;
        for(i=1; i<=m; i++)
        {
            if(p >= x)
            {
                flag = 1;
                break;
            }
            p = p*2;

        }
        if(flag ==1 )
        {
          cout << (m - i) +1 <<endl;
        }
        else{
            cout << 0 <<endl;
        }
    }
    return 0;
}