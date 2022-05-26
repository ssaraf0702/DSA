#include<iostream>
using namespace std;

int main(){


   int T;
   cin >> T;
   while(T--){
   
    int A,B;
    cin >> A >> B;
    cout << max((1500 - ((2*A) + 4*(A+B))),(1500 - ((4*B) + 2*(A+B)))) << endl;

   }

   return 0;
}