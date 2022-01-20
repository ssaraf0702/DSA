#include <iostream>
#include <cmath>
typedef long long ll;

using namespace std;

int main()
{
    ll T;
    cin >> T;
    while(T--){
    ll res = 0;
    ll arr[5];
    for(int i=0; i<3; i++)
    {
        cin >> arr[i];
    }
    res=(arr[0]+arr[1]+arr[2])/2; 
    res = min(res, arr[0]+arr[1]);
    res = min(res, arr[0]+arr[2]);
    res = min(res, arr[2]+arr[1]);
    cout << res << endl;
    }
 return 0;
}