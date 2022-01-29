#include<iostream>
typedef long long int ll;
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        ll sum=0;
        cin>> n;
        if(n==1)
        {
            cout << 0 <<endl;
        }
        else if(n%2!=0)
        {
            for(ll i=1; i<=n-1; i=i+2)
             {
               sum = sum + (i^(i+1));
             }
        }
        else{
            for(ll i=1; i<=n; i=i+2)
              {
                sum = sum + (i^(i+1));
                }
        }
        cout << 2*sum <<endl;
    }
    return 0;
}