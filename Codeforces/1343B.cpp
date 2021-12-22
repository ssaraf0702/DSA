#include <iostream>

using namespace std;

void solve(){
    int N;
    cin>>N;
    if(N/2%2==0){
        int arr[N+1];
        for(int i=1; i<=N; i++){
            if(i%2!=0){
                arr[(N+i+1)/2] = i;
            }    
            else{
                arr[i/2] = i;
            }

        }
        arr[N] = arr[N]+N/2;
        cout<<"YES"<<endl;
        for(int i=1; i<=N; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else cout<<"NO"<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}