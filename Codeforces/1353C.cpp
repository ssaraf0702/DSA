#include<iostream>
typedef long long ll; 
using namespace std;
 
int main(){
    int T;
    cin >> T;
    while(T--)
    {
        ll n;
        ll sum=0;
        cin >> n;
        while((n/2)>0)
        {
            sum = sum + 8*(n/2)*(n/2);
            n = n-2; 
        }
        cout << sum  << endl;
    }
    
    return 0;
 
}