#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
     ll t;
     cin >> t;
     while(t--)
     { 
         ll n,a,b,c,d;
         cin >> n >> a >> b >> c >> d;
         if(n*(a-b) <= (c+d) && (c-d) <= n*(a+b))
         {
             cout << "YES" <<endl;
         }
         else{
             cout << "NO" <<endl;
         }
     }
     return 0;
}


