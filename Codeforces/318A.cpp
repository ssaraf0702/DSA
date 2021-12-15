#include <iostream>
typedef long long ll;
using namespace std;

int main(){
    ll n, k;
    cin>>n>>k;

    ll mid = (n+1)/2;
    if(k<=mid){
        cout<<(2*k)-1<<endl;
    }else cout<<2*(k-mid)<<endl;
    return 0;
}