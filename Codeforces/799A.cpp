#include <iostream>
#include <cmath>
typedef long long ll;

using namespace std;

int main()
{
    ll n,t,k,d;
    cin >> n >> t >> k >> d;
    ll time = d;
    while(time>=0){
        n-=k;
        time-=t;
    }
    if((n>0 && time<0)||(time==0 && n>=time+1)) cout<< "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}
