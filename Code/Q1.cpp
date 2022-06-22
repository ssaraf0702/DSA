#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll bits(ll n)
{
   ll count = 0;
   while(n>0)
   {
    count++;
    n=n/2;
   }
   return count;
}

int main(){

    int T;
    cin >> T;
    while(T--)
    {
      ll A,B,N;
      cin >> A >> B >> N;
      ll bitsA = bits(A);
      ll bitsB = bits(B);
       ll maxi = max(A,B);
          ll mini = min(A,B);
          ll val=0,i = 0;
        while(maxi>0)
        {
            if(maxi%2 != mini%2)
            {
                val = val + pow(2,i);
            }
            maxi = maxi/2;
            mini = mini/2;
            i++;
        }
      if(A==B)
      {
        cout << 0 <<endl;
      }
      else if(bitsA == bitsB)
      {
        ll res3 = bits(val);
        if(N > val)
        {
            cout << 1 <<endl;
        }
        else if(N<=val && N>pow(2,res3-1) && val!=pow(2,res3-1)){
          cout << 2 << endl;
        }
        else{
            cout << -1 <<endl;
        }
      }
      else{
         if(N > val)
         {
            cout << 1 <<endl;
         }
         else if(N <= val && N > pow(2,max(bitsA,bitsB)-1))
         {
            cout << 2 <<endl;
         }
         else{
            cout << -1 <<endl;
         }
      }
    }
    return 0;
}