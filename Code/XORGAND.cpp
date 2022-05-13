#include<iostream>
using namespace std;
typedef long long ll;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
        ll N;
        cin >> N;
        ll arr[N];
        for(int i=0; i<N; i++)
        {
            cin >> arr[i];
        }
        int q;
        cin >> q;
        while(q--)
        {
            ll L,R,X,c=0;
            cin >> L >> R >> X;
            for(int i = L-1; i<R; i++)
            {
                if((arr[i]^X) > (arr[i]&X))
                {
                    c++;
                }
            }
            cout << c << endl;
        }
    }
    return 0;
}