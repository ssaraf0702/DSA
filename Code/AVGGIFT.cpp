#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--){
        ll N,X;
        ll sum =0;
        cin >> N >> X;
        for(ll i=0; i<N; i++ )
        {
            ll x;
            cin >> x;
            sum += x;
        }
        if(sum % X == 0){
            cout << "YES" << endl;
        }
        else{
            if(sum/x > 0){
                
            }
            cout << "NO" <<endl;
        }

    }
    return 0;
}