#include<iostream>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin >> t;
     while(t--)
     {
       int A,B,C,D;
       cin >> A >> B >> C;
       if(A<B)
       {
           A = A + C;
       }
       else{
           B = B + C;
       }

       cin >> D;
       if(A<B)
       {
           A = A + D;
       }
       else
       {
           B = B + D;
       }

       if(A<B)
       {
           cout << "S" <<endl;
       }
       else{
           cout << "N" <<endl;
       }
     }
     return 0;
}

