#include<iostream>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     
     int n;
     cin >> n;
     int sum = 0;
     int max = INT32_MIN;
     for(int i=1; i<=n ; i++)
     {
         int a,b;
          cin >> a >> b;
          sum = sum + (b - a);
          if(max < sum)
          {
              max = sum;
          }
     }
     cout << max <<endl;

   return 0;
}