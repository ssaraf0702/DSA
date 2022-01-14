#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x=0;
    cin>>n;
    while(n>9)
    {
        x++,n++;
        while(n%10==0)n/=10;
    }
    x+=9;
    cout<< x <<endl;
}