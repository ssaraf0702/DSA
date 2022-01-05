#include<iostream>

using namespace std;

int main()
{
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin >> t;
     
     while(t--)
     {
       int n,x,y;
       cin >> n >> x >> y;
       if(x%2 != 0 && y%2 !=0 )
       {
           cout << 0 << endl;
       }
       else if(x%2 == 0 && y%2 ==0) {
           cout << 0 << endl;
       }
       else {
           cout << 1 << endl;
       }
     }
 
   return 0;
}