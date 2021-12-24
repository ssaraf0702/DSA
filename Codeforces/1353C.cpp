#include<iostream>
typedef long long ll;
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        int sum=0;
        cin >> n;
        int x = n/2;
        ll now=8;
  
        for(ll i=1;i<=n;i++)
        {
          sum+=now*i;
          now+=8;
         }
    cout << (sum) << endl;
    }   
    return 0;
}