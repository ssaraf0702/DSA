#include<iostream>
typedef long long ll;
using namespace std;

int main(){
 
 ll x;
 cin >> x;
 ll cnt=0;
 while(x/2!=0)
 {
    if(x%2==1)
    {
        cnt++;
    }
    x=x/2;
 }
 cout << cnt+1 <<endl;

    return 0;
}