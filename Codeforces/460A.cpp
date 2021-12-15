#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, m, ans=0;
   cin >> n >> m; 
   ans = n;
   while(n > 1 && n/m != 0)
   {
       ans = ans + n/m;
       n = n/m + n%m;
   }
   cout << ans <<endl;
    return 0;
}
