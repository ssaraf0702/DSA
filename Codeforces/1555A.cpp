#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
     ll t;
     cin >> t;
     while(t--)
     {
       ll n,rem;
       cin >> n;
       int arr[] = {20,20,25,25,30,30,35,35,40,40};
       if(n < 7)
       {
           cout << 15 <<endl;
           continue;
       }
       else if(n < 17)
       {
           cout << arr[n-7] <<endl;
           continue;
       }
       n -= 7;
       rem = n%10;
       n /= 10;
       cout << arr[rem] + n*25 <<endl;
     }
     return 0;
}