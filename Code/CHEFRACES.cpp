#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
     
      int a,b,c,d,cn=2;
      cin >> a >> b >> c >> d;
      if(a == c || a == d)
      {
          cn--;
      }
      if(b == c || b == d)
      {
          cn--;
      }
     cout << cn << endl;
    }

    return 0;
}