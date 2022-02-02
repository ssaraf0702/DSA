#include<iostream>
typedef long long ll;
using namespace std;

int main(){

    int T;
    cin>>T;
    while(T--){
        ll x;
        cin>>x;
        ll a=x, b = 0, c=x;
        for(int i=0; i<31; i++){
            if(!(c&(ll)1<<i)){
                c = c|((ll)1<<i);
                break;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}