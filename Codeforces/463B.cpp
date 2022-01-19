#include <iostream>
using namespace std;

int main()
{
    int n, e(0), ans(0);
    cin >> n;
    int arr[n];
    arr[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        e += arr[i - 1] - arr[i];
        if (e < 0)
        {
            ans -= e;
            e = 0;
        }
    }

    cout << ans << endl;
    return 0;
}