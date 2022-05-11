#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
     ll N;
     cin >> N;
     ll A[N];
     ll B[N];
     map<pair<ll,ll>,ll> M;
     for(ll i=0; i<N; i++)
     {
         cin >> A[i];
     }
     for(ll i=0; i<N; i++)
     {
         cin >> B[i];
         M[{(A[i]-B[i]),(A[i]*B[i])}]++;
     }
     ll sol = 0;
     for(auto i: M)
     {
         if(i.first.first > 0)
         {
             break;
         }
         ll res = (i.first.first == 0)? ((i.second)*(i.second-1))/2 : (i.second*M[{(i.first.first)*-1,i.first.second}]);   
         sol += res;
     }
     cout << sol << endl;
    }
    return 0;
}