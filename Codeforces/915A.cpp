#include <iostream>
 
using namespace std;
 
int main(){
 
    int n,k;
    cin>>n>>k;
    int min = 1e9;
    //int arr[n];
    for(int i=0 ; i<n; i++){
        int num;
        cin>>num;
        if(k%num==0){
            if(min> k/num){
                min = k/num;
            }
        }
    }
    cout<<min<<endl;
 
 
    return 0;
}