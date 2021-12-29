#include <iostream>
#include <math.h>
typedef long long int ll;
using namespace std;

    ll sod(ll n)
    {
      ll sum=0;
      while(n>0)
      {
         sum+=n%10;
         n/=10;
       }
       return sum;
     }

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s;
    cin>>s;
    ll sum = 0;
    ll c = 1;
    if(s.size()!=1)
    {
        for(int i=0; i<s.size(); i++)
        {
            sum+=(s[i]-'0');
        }
        while(sum>=10)
        {
            sum=sod(sum);
            c++;
        }
        cout<<c<<endl;
    }
    else
        cout<<"0"<<endl;


    return 0;
}