#include <iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;

        int diff = abs(a-b);
        if(diff%10==0)cout<<diff/10<<endl;
        else cout<<(diff/10) + 1<<endl;
    }
}