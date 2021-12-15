#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int res[N];
    for(int i=1; i<=N; i++){
        int num;
        cin>>num;
        res[num] = i;
    }
    for(int i=1; i<=N; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}