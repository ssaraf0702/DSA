#include<iostream>
#include<bits/stdc++.h>
#include<climits>


using namespace std;

int main(){
    int  n,m;
    int a[1001] = {0};
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
       int num;
       cin>> num;
       a[--num]++;
    }
    int mi = INT_MAX;
    for(int i=0; i<n; i++)
    {
        mi = min(mi,a[i]);
    }
    cout<< mi << endl;

    return 0;
} 