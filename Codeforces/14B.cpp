#include<algorithm>
#include<cmath>
#include<cstring>
#include<iostream>
#include<map>
#include<set>
#include<stack>
#include<vector>

typedef long long int ll;

using namespace std;

int arr[1010];
int main()
{

    int i,j,k;
    int N,M;
    int s,e;

    cin>>N>>M;

    k=0;
    memset(arr,0,sizeof(arr));
    for(i=0;i<N;i++)
    {
        cin>>s>>e;
        if(s>e)
            swap(s,e);

        arr[s]++;
        arr[e+1]--;

        k=max(k,e);
    }

    j=10000000;
    for(i=1;i<=k;i++)
    {
        arr[i]+=arr[i-1];

        if(arr[i]==N)
        {
            j=min(j,abs(M-i));
        }
    }

    if(j==10000000)
        cout<<"-1";
    else
        cout<<j;

    return 0;
}