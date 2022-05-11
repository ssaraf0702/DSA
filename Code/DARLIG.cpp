#include<iostream>
using namespace std;

int main(){
 
    int T;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n>> k;
        if(k==1)
        {
             if(n%4==0)
             {
                 cout << "On"<<endl;
             }
             else{
                 cout << "Ambiguous" <<endl;
             }
        }
        else
        {
            if(n%4==0)
             {
                 cout << "Off"<<endl;
             }
             else{
                 cout << "On" <<endl;
             }
        }
    }
  
    return 0;
}