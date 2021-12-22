#include <iostream>
#include <cmath>
using namespace std;


// void solve(){
//     int n;
//     cin>>n;
//     int Sl=pow(2,n/2), Sr=pow(2,n);
//     for(int i=1; i<n/2; i++){
//         Sr += pow(2,i);
//         Sl += pow(2,i+n/2);
//     }
//     cout<<Sr-Sl<<endl;
// }
int main(){
    int T;
    cin>>T;
    while(T--){
        //solve();
        int n;
        cin>>n;
        cout<<pow(2, n/2+1) -2<<endl;
    }
    //General Formula
    //res = 
    return 0;    
}