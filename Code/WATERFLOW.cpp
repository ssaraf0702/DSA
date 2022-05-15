#include<iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--){

        int W,X,Y,Z;
        cin >> W >> X >> Y >> Z;
        if( (Y*Z) > (X-W) )
        {
            cout << "OVERFLOW" <<endl;
        }
        else if( (Y*Z) == (X-W))
        {
            cout << "FILLED" <<endl;
        }
        else{
            cout << "UNFILLED" <<endl;
        }
    }

    return 0;
}