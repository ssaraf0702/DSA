#include <iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,x,y,flag=1;
        cin>>n>>x>>y;
        int A[n], B[n];
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        for(int i=0; i<n; i++){
            cin>>B[i];
        }

        for(int i=0; i<n ;i++){
            if(B[i]-A[i]==x||B[i]-A[i]==y){
                continue;
            }
            else{
                cout<<"No"<<endl;
                flag=0;
                break;
            } 
        }
        if(flag==1)cout<<"Yes"<<endl;
    }
    return 0;
}