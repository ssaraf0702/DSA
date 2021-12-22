#include<iostream>
typedef long long ll;

using namespace std;
int main()
{
    int t;
    ll n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int ans = 0;
        if(n % 2 == 0){
            ans = n + (2*x);
        }
        else{
            for(int i=3; i<=n; i++){
                if(n % i == 0){
                    n +=i;
                    x--;
                    break;
                }
            }
            ans = n + (2*x);
        }
        cout<<ans<<endl;
    }

    return 0;
}