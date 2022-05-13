#include<iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
     int a,b,x,y;
     cin >> a >> b >> x >> y;
     if(x<a || y<b)
     {
          cout << "IMPOSSIBLE" <<endl;
     }
     else {
         cout << "POSSIBLE" <<endl;
     }

    }

    return 0;
}