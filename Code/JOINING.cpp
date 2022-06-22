#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){

        int N,K;
        cin >> N >> K;
        int grp;
        if(N%5 == 0)
        {
            grp = N/5;
        }
        else{
            grp = N/5 + 1;
        }
        if(K%5 == 0)
        {
          cout << (grp - (K/5)) <<endl;  
        }
        else{
            cout << (grp - ((K/5)+1)) <<endl;
        }
    }
}