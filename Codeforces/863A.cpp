#include<iostream>
typedef long long ll;

using namespace std;


ll removetrailzero(ll n)
{
  while(n%10 == 0)
  {
      n= n/10;
  }
  return n;
}

ll reverse(ll num) {

	int result = 0;

	while (num > 0) {
		result = result * 10 + num % 10;
		num /= 10;
	}
   return result;
}

int main(){

   ll x;
   cin >> x; 
   x = removetrailzero(x);
   ll rev = reverse(x);
   if(x==rev)
   {
       cout <<"YES" <<endl;
   }
   else{ 
       cout << "NO" <<endl;
   }
    return 0;
}