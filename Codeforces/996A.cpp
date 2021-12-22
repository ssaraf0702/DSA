#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int bills=0;
    while(n!=0){
        if(n>=100){
            bills = bills + n/100;
            n = n%100;
        }else if(n>=20){
            bills = bills + n/20;
            n = n%20;
        }else if(n>=10){
            bills = bills + n/10;
            n = n%10;
        }else if(n>=5){
            bills = bills + n/5;
            n = n%5;
        }else{
            bills = bills + n;
            n = 0;
        } 
    }
    cout<<bills<<endl;
    return 0;
}