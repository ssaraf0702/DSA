#include<iostream>

using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
        int x,y;
        cin >> x >> y;
        int res = min((x/2),y);
        cout << res << endl; 
    }
    
    return 0;
}