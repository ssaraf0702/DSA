#include <iostream>
using namespace std;

int n, x, yt, td;

int main() {

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (n == 1) {
            if (x == 15) {
                cout << "DOWN";
            } else if (x == 0) {
                cout << "UP";
            } else {
                cout << -1;
            }
            return 0;
        } else {
            if (i == n - 2) {
                yt = x;
            } else if (i == n - 1) {
                td = x;
            }
        }
    }
    if (yt + 1 == td && td != 15 && td != 0) {
        cout << "UP";
    } else if (yt - 1 == td && td != 15 && td != 0) {
        cout << "DOWN";
    } else if (yt + 1 == td && td == 15) {
        cout << "DOWN";
    } else if (yt - 1 == td && td == 0) {
        cout << "UP";
    } else {
        cout << -1;
    }
}