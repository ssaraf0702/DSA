#include <iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int sum = a+b+c+n;
        if(sum%3==0){
            int m = max(a,max(b,c));
            if(m<=(sum)/3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}