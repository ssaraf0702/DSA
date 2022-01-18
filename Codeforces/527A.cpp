#include<iostream>
#include <cstdio>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;

  long long ans = a / b;
  long long c = a - ans * b;
  while(c != 0) {
    a = b;
    b = c;
    long long bf = a / b;
    c = a - bf * b;
    ans += bf;
  }
  cout << ans << endl;
  return 0;
}