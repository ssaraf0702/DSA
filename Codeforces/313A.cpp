#include<iostream>
typedef long long ll;
using namespace std;

int main(){
     ll n;
    cin>> n;
    if(n<0)
    {
        n= -n;
        if(n%10 > ((n%100)/10))
        {
            n=n/10;
            cout <<(-n)  <<endl;
        }
        else{
            int rem = n%10;
            n= ((n/100)*10 + rem);
            cout << (-n) <<endl;
        }
    }
    else{
        cout << n <<endl;
    }
   return 0;
}
