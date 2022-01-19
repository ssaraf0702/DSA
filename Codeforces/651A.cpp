#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long a,b,c;
    while(cin>>a>>b)
    {
        c=0;
        while(a>0 && b>0)
        {
            if(a==1 &&b ==1)
                break;
            if(a>b)
            {
                a-=2;
                b+=1;
            }
            else
            {
                a+=1;
                b-=2;
            }
            c++;
        }
        cout<<c<<endl;
    }

    return 0;
}