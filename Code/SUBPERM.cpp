#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        int n,k;
        cin >> n >> k;
        if(n>1 && k<2)
        {
            cout << -1 << " " << endl;
        }
        else if(n==1 && k==1)
        {
            cout << 1 << " " << endl;
        }
        else{
            for(int i = 1; i<k; i++)
            {
                cout << i <<" ";
            }
            for(int i=0; i<= n-k; i++)
            {
                cout << n-i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}