#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long  t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k*k<=n)
        {
            if((n+k)%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
