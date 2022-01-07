#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string str, l;
    cin >> str >> l;
    cout << max(abs(str[0] - l[0]), abs(str[1] - l[1])) << endl;
    while (str != l)
    {
        if (str[0] < l[0])
        {
            cout << "R";
            str[0] += 1;
        }
        else if (str[0] > l[0])
        {
            cout << "L";
            str[0] -= 1;
        }

        if (str[1] < l[1])
        {
            cout << "U";
            str[1] += 1;
        }
        else if (str[1] > l[1])
        {
            cout << "D";
            str[1] -= 1;
        }

        cout << endl;
    }
    return 0;
}