#include<bits/stdc++.h>
using namespace std;

#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

ll L, v, l, r, res=0;

int main(){
    fastIO()
    int t;
    cin >> t;

    while(t--){
        res= 0;
        cin>>L>>v>>l>>r;

        res+= (l-1)/v;

        ll tempp= L/v;
        tempp-= r/v;

        res+= tempp;

        cout<<res<<endl;
    }
    return 0;
}