#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 250000

using namespace std;

int main()
{
    int i,j,k;
    int n,x,y,z;
    int a,b,c;

    n=3;
    int arr[n][n];

    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>arr[i][j],k+=arr[i][j];
    }

    k/=2;

    x=arr[1][0]+arr[1][2]-arr[0][1]-arr[0][2];
    y=arr[2][0]+arr[2][1]-arr[1][0]-arr[1][2];

    c=(k-x-2*y)/3;
    b=y+c;
    a=x+b;

    arr[0][0]=a;arr[1][1]=b;arr[2][2]=c;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<arr[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}