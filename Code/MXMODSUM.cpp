#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 
    int T;
    cin >> T;
    while(T--){

        int N,M;
        cin >> N >> M;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
          cin >> arr[i];
        }
        
        sort(arr,arr+N,greater<int>());
        int sum  = 2*arr[0];
        for (int i = 0; i < N-1; i++)
        {
           //int diff = INT_MAX;
           if(arr[i] == arr[i+1])
           {
               sum = max(sum,arr[i] + arr[i+1]); 
            }
           else
           {
               sum = max(sum,arr[i] + arr[i+1] + (M + (arr[i+1]-arr[i])%M));
               //cout << ((arr[i+1]-arr[i])%M) <<endl;
               //cout << sum << " " << arr[i] << " " << arr[i+1] <<endl;
         }
       }
      cout << sum <<endl;

    }
    return 0;
}