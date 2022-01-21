#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,m,n,mark[200];
    string str;
    while(cin>>n>>str)
    {
        ll m=n,cnt=0;
        memset(mark,0,sizeof(mark));
        vector<int>v;
        for(i=0; i<str.size(); i++)
        {
            if(mark[str[i]]==0)
            {
                v.push_back(i);
                mark[str[i]]=1;
            }
        }
        if(n==1)
            cout<<"YES\n"<<str<<endl;
        else if(v.size()>=n)
        {
            cout<<"YES\n"<<str[0];
            ll j=1;
            for(i=1; i<str.size(); i++)
            {
                if(v[j]==i && n>1)
                {
                        cout<<"\n";
                        n--;
                        j++;
                }
                cout<<str[i];
            }
            cout<<"\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}