#include<iostream>
using namespace std;

int main(){
   
    int T;
    cin >> T;
    while(T--)
    {
        int x,y;
        cin >> x >> y;
        
        if(y==0)
        {
            cout << x << endl;
        }
        else if( x==y)
        {
            cout << (2*y)-1 << endl;
        }
        else{
             int rem = x-y;
             int total = 2*y + rem;
             cout << total << endl;
        }
    }
    return 0;
}