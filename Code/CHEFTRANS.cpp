#include<iostream>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin >> t;
     while(t--)
     {
         ll x,y,z;
         cin >> x >> y >> z;
         if((x+y) == z)
         {
             cout << "EQUAL" << endl;
         }
         else if((x+y) > z)
         {
             cout << "TRAIN" << endl;
         }
         else
         {
             cout << "PLANEBUS" << endl;
         }
     }

    return 0;
}