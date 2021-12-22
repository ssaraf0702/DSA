#include <iostream>

using namespace std;

int main(){

    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        if(i==1) cout<<"I hate ";
        else if(i%2!=0) cout<<"that I hate ";
        else cout<<"that I love ";
    }
    cout<<"it"<<endl;
    return 0;
}