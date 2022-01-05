#include<iostream>

using namespace std;

int main()
{
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin >> t;
     
     while(t--)
     {
       int z,y,a,b,c;
       cin >>z >> y >> a >> b >> c;
       int sum = a + b + c;
       if((z-y) >= sum)
       {
           cout << "YES" << endl;
       }
       else{
           cout << "NO" << endl;
       }
     }  
     return 0;
}