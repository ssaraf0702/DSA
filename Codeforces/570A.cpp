#include<bits/stdc++.h>
using namespace std;
long long arr[101][101],arr1[101],res[101];
#define mem(arr,n) memset(arr,n,sizeof(arr))
int main()
{
    long long i,j,x,mx,can,city;
    while(cin>>can>>city)
    {
        mem(arr,0);
        mem(arr1,0);
        mem(res,0);
        for(i=1;i<=city;i++)
        {

            for(j=1;j<=can;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=1;i<=city;i++)
        {
              long int m,n,mv=-1;
            for(j=1;j<=can;j++)
            {
                if(arr[i][j]>mv)
                {
                    mv=arr[i][j];
                    m=i;n=j;
                }
            }
            arr1[m]=n;
        }
        for(i=1;i<=can;i++)
        {
            for(j=1;j<=city;j++)
            {
                if(i==arr1[j])
                   res[i]++;

            }
        }
        mx=0;
        int ot=1;
        for(i=1;i<=can;i++)
        {
            if(res[i]>mx)
                {
                    mx=res[i];
                    ot=i;
                }

        }
        cout<<ot<<endl;
    }
    return 0;
}