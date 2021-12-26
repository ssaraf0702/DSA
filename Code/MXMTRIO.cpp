#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        ll arr[n];
        ll Min;
        ll max1 = INT32_MIN;
        ll max2 = INT32_MIN;
        for(ll i=0; i<n; i++)
        {
             cin>> arr[i];
        }
         for (ll i = 0; i <n ; i++) 
         {
            ll current = arr[i];
            if(max1<current){
                max2 = max1;
                max1 = current;
            }else if(max2<current){
                max2 = current;
            }
        }
        Min = *min_element(arr,arr+n);
        cout << ((max1-Min)*max2) <<endl;  
    }
    return 0;
}