#include<iostream>
typedef long long ll;
using namespace std;

int main(){
     int n,m,res;
     cin >> n >> m;
     if(n < m)
     {
         cout << -1 <<endl;
     }
     else{
         if(n%2 != 0)
         {
             res = n/2 + 1;
         }
         else{
          res = n/2;
         }
         
         
         if(res%m != 0){
           res = ((res/m)+1)*m;
         }
         cout << res << endl;
     }
     return 0;
}