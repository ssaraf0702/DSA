#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i;
        int n,x,m;
        int ans=0;

        cin>>n>>x;
        int arr[n];

        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>m;

        if(m>n)
        {
            for(i=0;i<n;i++)
            {
                ans+=arr[i];
            }

            ans-=(m-n)*x;
        }
        else
        {
            sort(arr,arr+n);
            for(i=0;i<m;i++)
            {
                ans+=arr[i];
            }
        }
        cout<<ans;


        return 0;
}