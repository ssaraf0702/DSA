#include<iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        if(a-b==0) cout<<0<<endl;
        else if(a-b>0){
            if((a-b)%2!=0) cout<<2<<endl;
            else cout<<1<<endl;
        }else{
            if((a-b)%2==0)cout<<2<<endl;
            else cout<<1<<endl;
        }
    }
    return 0;
}
