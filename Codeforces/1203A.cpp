#include <bits/stdc++.h>
using namespace std;

int arr[205];

int main()
{
    int t,n,i,k;

     cin >> t;

    while (t--)
    {
        cin >> n;

        for (i=0; i<n; i++)
           cin >> arr[i];

        k = true;

        for (i=1; i<n; i++)
        {
            if (!(abs(arr[i]-arr[i-1]) == 1 || (arr[i] == 1 && arr[i-1] == n) || (arr[i-1] == 1 && arr[i] == n)))
            {
                k = false;
                cout << "NO" << endl;
                break;
            }
        }

        if (k)
            cout << "YES" <<endl;
    }
    return 0;
}