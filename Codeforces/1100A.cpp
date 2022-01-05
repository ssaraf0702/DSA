#include<bits/stdc++.h>
#include<stdio.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,i,j,k;

      ll s=0,mx=-1000000;
      cin>>n>>k;
      ll ar[n];
      for(i=0;i<n;i++)
      {
          cin>>ar[i];
          s+=ar[i];
      }
      for(i=0; i<k; i++)
      {
          ll ans=s;
          for(j=i;j<n;j+=k)
          {
              ans-=ar[j];
          }
          mx=max(mx,abs(ans));
      }
      cout<<mx<<endl;

return 0;
}