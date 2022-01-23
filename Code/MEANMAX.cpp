#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        double arr[n];
        double sum = 0.0;
        double res =0.0;
        for(int i =0; i<n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        sort(arr,arr+n);    
        sum = (double)(sum - arr[n-1]);
        res = (double)(sum/(n-1)) + (double)arr[n-1];
        cout <<fixed<<setprecision(6) << res << endl;
    }
    return 0;
}