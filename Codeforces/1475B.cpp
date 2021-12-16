#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        int rem = n % 2020;
        if(rem <= n/2020)
        {
            cout << "YES" <<endl;
        }
        else 
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}