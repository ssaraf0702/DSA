#include <iostream>

using namespace std;

int main(){

    int N;
    cin>>N;
    int sum=0;
    for(int i=0; i<N; i++){
        int num;
        cin>>num;
        sum += num;
    }
    cout<<sum/float(N)<<endl;
    return 0;
}