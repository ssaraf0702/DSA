#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
        int x,y;
        cin >> x >> y;
        cout << abs((x+9)/10 - (y+9)/10) <<endl;


    }
    return 0;
}