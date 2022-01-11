#include<cstdio>
#include<algorithm>
#include<iostream>
  
using namespace std;

int main(){

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


      int a[4] = {0};
      int s;
      cin >> s;
      a[s]= 1;
      
      int l,r;
      cin >> l >> r; 
      swap(a[l],a[r]);
      cin >> l >> r;
      swap(a[l],a[r]);
      cin >> l >> r;
      swap(a[l],a[r]);

      cout << (find(a+1, a+3, 1) - a);
       
      return 0;
  }
