#include<iostream>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
     ll n;
     int flag =0;
     cin >> n;
     if(n & 1)
     {
         cout << "YES" <<endl;
 
     }
     else{
         ll div = n;
         while(div>1)
         {
             if(div%2 != 0)
             {
                 flag =1;
                 cout << "YES" <<endl;
                 break;
             }
             div = div/2;
         }
         if(flag==0)
         {
             cout << "NO" <<endl;
         }
     }
  }
}
