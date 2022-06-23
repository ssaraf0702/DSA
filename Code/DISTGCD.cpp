#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

void uniqsets(ll idx, vector<ll>&primef, vector<ll>&datas, ll *c){
    (*c)++;
    for(int i=idx; i<primef.size(); i++){
        if(i!=idx && primef[i]==primef[i-1])continue;
        datas.push_back(primef[i]);
        uniqsets(i+1, primef, datas, c);
        datas.pop_back();
    }

}


void PrimeFac(int dif, vector<ll>&primef)
{
 int cnt = 0;
 while(dif%2 == 0){
    primef.push_back(2);
    dif = dif/2;
 }
 for(ll i =3; i<=sqrt(dif); i=i+2)
 {
   while(dif%i == 0)
   {
    primef.push_back(i);
    dif= dif/i;
   }
 }
  if(dif>2)
  primef.push_back(dif);
}

int main(){

   int T;
   cin >> T;
   while(T--)
   {
     ll A,B;
     cin >> A >> B;
     vector<ll> primef;
     vector<ll> datastr;
     ll c = 0;
     ll dif = abs(A-B);
     PrimeFac(dif,primef);
     uniqsets(0,primef,datastr,&c);

     cout << c <<endl;
   }

    return 0;
}