#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t,x,y;
    cin>>t;
    while(t--)
    {
        ll c=0;
        cin>>x>>y;
        if(x == y){
            cout<<0<<endl;
            continue;
        }
        if(x > y){
            while(x > y){
                if(x % 8 == 0 && x/8 >= y){
                    x /=8;
                    c++;
                }
                else if(x % 4 == 0 && x/4 >= y){
                    x /=4;
                    c++;
                }
                else if(x % 2 == 0 && x/2 >= y){
                    x /=2;
                    c++;
                }
                else{
                    break;
                }
            }
        }
        else{
            while(x < y){
                if(x * 8 <= y){
                    x *=8;
                    c++;
                }
                else if(x * 4 <= y){
                    x *=4;
                    c++;
                }
                else if(x * 2 <= y){
                    x *=2;
                    c++;
                }
                else{
                    break;
                }
            }
        }
        if(x == y){
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}