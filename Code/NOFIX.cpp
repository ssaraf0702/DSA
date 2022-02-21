#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int arrr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin >> arrr[i];
        }
        int count = 0;
        for(int i=1; i<=n; i++)
        {
            if(arrr[i] == (count+i))
            {
                count++;
            }
        }
      cout << count << endl;
    }

    return 0;
}