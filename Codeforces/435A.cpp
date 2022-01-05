#include<bits/stdc++.h>
#define ll              long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,x,arr[101];

    cin>>n>>x;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(arr[i] == 0)continue;
        int j = i+1;
        if(j != n && arr[i] < x){
            while(arr[i] < x){
                if(j == n)break;
                if(arr[i] + arr[j] <= x){
                    arr[i] += arr[j];
                    arr[j] = 0;
                }
                else{
                    break;
                }
                j++;
            }
        }
        if(arr[i] <= x){
            ans++;
            arr[i] = 0;
        }
        else if(arr[i] > x){
            int div = arr[i] / x;
            ans += div;
            arr[i] -= (div * x);
            if(i + 1 == n && arr[i] > 0){
                ans++;
            }
            else{
                arr[i+1] = arr[i];
            }
            arr[i] = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}