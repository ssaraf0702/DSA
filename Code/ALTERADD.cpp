#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

     int T;
     cin >> T;
     while(T--)
     {
          long long A,B;
          cin >> A >> B;
          if((B-A)%3 == 2)
          {
            cout << "NO" <<endl;
          }
          else{
            cout << "YES" <<endl;
          }

     }

    return 0;
}