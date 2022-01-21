#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s; cin >> s;

  int bt = 0;
  for(int i = 1; i < s.size(); i++) {
    if(s[i - 1] == 'V' && s[i] == 'K') bt++;
  }

  for(int i = 0; i < s.size(); i++) {
    s[i] = s[i] == 'V' ? 'K' : 'V';

    int cnt = 0;
    for(int j = 1; j < s.size(); j++) {
      if(s[j - 1] == 'V' && s[j] == 'K') cnt++;
    }
    bt = max(bt, cnt);
    s[i] = s[i] == 'V' ? 'K' : 'V';
  }
  cout<< bt << endl;
  return 0;
}