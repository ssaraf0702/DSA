#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        int n,x;
        cin >> n >> x;
        cout << x % (n+1) <<endl;
    }
}