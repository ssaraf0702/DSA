#include <iostream>

using namespace std;

int main(){

    int i,j;
    for(int p=1; p<6; p++){
        for(int q=1; q<6; q++){
            int num;
            cin>>num;
            if(num==1){
                i=p, j=q;
            }
        }
    }
    cout<<abs(3-i)+abs(3-j)<<endl;
    return 0;
}