#include<bits/stdc++.h>
using namespace std;
#define ll long long

int  main()
{
    ll j,i,m,n;
    cin>>n>>m;
    ll res=0, cnt=0, mx=0, mn=0,X,Y;
    ll arr[m];
    Y=n;
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
        res+=arr[i];
    }
    sort(arr, arr+m);
    for(i=0; i<m and n>0; i++)
    {
        X=arr[i];
        while(X>0 and n>0)
        {
            mn+=X; 
            X--; 
            n--;
        }
    }
    n=Y;
    for(i=0; i<n; i++)
    {
        sort(arr, arr+m);
        mx+=arr[m-1];
        arr[m-1]--;
    }


    cout<<mx<<" "<<mn<<endl;

}