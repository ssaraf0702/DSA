#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--){
    
      int A,B,M;
      cin >> A >> B >> M;
      if(A < B)
      {
          cout << min((B-A),(M-B+A)) << endl;
      }
      else
      {
          cout << min((A-B),(M-A+B)) << endl;
      }

    }
    return 0;
}