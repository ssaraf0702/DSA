   
#include <iostream>
#include <algorithm>
using namespace std;
int arr[6], a[10];
int main() {
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 6);
    for (int i = 0; i < 6; i++) {
        a[arr[i]]++;
    }
    sort(a, a + 10);
    reverse(a, a + 10);
    if (a[0] == 6) {
        cout << "Elephant";
    } else if (a[0] == 5) {
        cout << "Bear";
    } else if (a[0] == 4) {
        if (a[1] == 2) {
            cout << "Elephant";
        } else {
            cout << "Bear";
        }
    } else {
        cout << "Alien";
    }
}