#include<iostream>
#include<cmath>
//#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      if(n%2 == 0)
        {
          int q = n/2;
          double ans = sqrt(q);
          if(ans - (int)ans == 0)
          {
              cout << "YES" <<endl;
              continue;
          }
        }     
     if(n%4 == 0)
        {
          int q = n/4;
          double ans = sqrt(q);
          if(ans - (int)ans == 0)
          {
              cout << "YES" <<endl;
              continue;
          }
        }
          cout << "NO" <<endl;
    }
}