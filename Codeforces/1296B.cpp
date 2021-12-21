#include<bits/stdc++.h>

using namespace std;

int a[200000];
int main() {
    int T;
    cin >> T;
    while(T --) {
        int m;
        cin >> m;
        int count = 0;
        while(m) {
            if (m < 10) {
                count += m;
                m = 0;
            } else {
                int s = m / 10;
                count += s * 10;
                m %= 10;
                m += s;
            }
        }
        cout << count << endl;
    }
    return 0;
}