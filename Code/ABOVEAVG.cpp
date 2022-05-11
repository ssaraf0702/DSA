#include<iostream>
typedef long long ll;

using namespace std;

int main(){
   
   ll t;
   cin >> t;
   while(t--)
   {
       ll N,M,X;
       cin >> N >> M >> X;
       if (M == X)
       {
           cout << 0 <<endl;
       }
       else{
       ll sum = N*X;
       cout << sum/(X+1) <<endl;
       } 
   }
   return 0;
}