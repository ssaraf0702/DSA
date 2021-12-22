#include <iostream>

using namespace std;

// void solve(){
//     int x,y,n;
//     cin>>x>>y>>n;
//     int Q = n/x;
//     if(Q*x+y>n){
//         Q--;
//     }
//     cout<<Q*x+y<<endl;
// }

int main(){

    int T;
    cin>>T;
    while(T--){
        // solve();
        int x,y,n;
        cin>>x>>y>>n;
        int Q = n/x;
        if(Q*x+y>n){
            Q--;
        }
        cout<<Q*x+y<<endl;
    }
    return 0;    
}