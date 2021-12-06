#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void funV(int n, int k, int a[])
{
    vector<int> v {5,9,4,8,2};
    for (int x =0 ; x<v.size(); x++) 
    {
        if(v[x] < k)
        cout << x << " ";
    }
}

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    funV(n,k,arr);
    return 0;
}
