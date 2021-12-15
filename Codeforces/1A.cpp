#include<bits/stdc++.h>
typedef long long ll; 

using namespace std;

int main(){
    
   ll n , m , a;
   cin >> n >> m >> a;
   ll x = 0 , y=0;
   if(n%a != 0)
   {
    x = (n/a) +1; 
   }
   else{
     x = n/a; 
   }
   if(m%a != 0){
       y = (m/a) + 1;
   }
   else
   {
       y = m/a;
   }
   cout << x*y << endl;
    return 0;
}