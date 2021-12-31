#include <iostream>
#include <string>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    if(n==0)
    {
        cout << 0 <<endl;
    }
    else if(n%2==0)
    {
        cout << n+1 <<endl;
    }
    else{
        cout << (n+1)/2 <<endl;
    }
    return 0;
}