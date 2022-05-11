#include<iostream>
using namespace std;

int main(){
  
    int T;
    cin >> T;
    while(T--)
    {
        int N,X;
        cin >> N >> X;
        int sum=0;
        for(int i=0; i<N-1; i++)
        {
            int x;
            cin >> x;
            sum = sum + x;
        }
        if(N*X < sum){
            cout << 0 << endl;
        }
        else{
        cout << (N*X - sum) << endl;
        }
    }
 
    return 0;
}