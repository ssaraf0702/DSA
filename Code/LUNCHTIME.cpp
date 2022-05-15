#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
       int n;
       cin >> n;
       int cnt = 0;
       for(int i=0; i<n; i++){
           int x;
           cin >> x;
           if(x >= 1000)
           {
               cnt++;
           }
       }
      cout << cnt << endl;
    }
    return 0;
}
