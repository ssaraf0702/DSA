#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,res,i,l,cp,tt,n;
    while(cin>>n>>tt>>cp)
    {
        res=0;
        l=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            {
               if(x<=tt)
                    l++;
               else
                    l=0;
            }
            if(l>=cp)
                res++;
        }
        cout<<res<<endl;
     }
    return 0;
}