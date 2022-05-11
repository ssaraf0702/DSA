#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--)
    {
        int N,X,Y,x,y;
        int c=0;
        cin >> N >> x >> y;
        c =  c + min((N-x),(N-y));
        c =  c + min((x-1),(y-1));
        c =  c + min((abs(x-1)),(abs(y-N)));
        c =  c + min((abs(x-N)),(abs(y-1)));
        c = c +  2*(N-1);
        cout << c << endl;
    }
    return 0;
}