#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
   
   int T;
   cin >> T;
   while(T--)
   {
       ll  num1, shubham;
       cin >> num1 >> shubham;
       ll res = (num1 - 1);
       cout << res*(2*shubham - num1) << endl; 
   }
    return 0;
}