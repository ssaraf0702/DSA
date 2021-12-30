#include<iostream>
#include<cmath>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin >> t;
     while(t--)
     {
         int n;
         cin >>n;
        double power = pow(3,(n-3));
         int res = (int)power * 10 * (n-2);
         cout << res <<endl;     
     }
     return 0;
}