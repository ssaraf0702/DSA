#include<iostream>
#include<cmath>
typedef long long ll;


using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--){
         ll a,b,n,s;
         cin >> a >> b >> n >> s;
         ll num = min(s/n,a);
         num = s - (n*num); 
         if(num <= b)
         {
             cout << "YES" <<endl;
         }
         else{
             cout << "NO" <<endl;
         }
    }
    return 0;
}