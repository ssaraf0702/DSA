#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a[1000];
    cin>>t;
    while(t--)
    {
        int e=0,o=0;
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
                e=1;
            else
                o=1;
        }
        if(e + o ==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}