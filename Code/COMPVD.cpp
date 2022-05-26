#include<iostream>
using namespace std;

int main(){


   int T;
   cin >> T;
   while(T--)
   {
        int N;
        cin >> N;
        int arr[N];
        int X = N;
        for(int i =0; i<N; i++)
        {
            cin >> arr[i];
        }
        for(int i =0; i<N-1; i++)
        {
            if(arr[i] == arr[i+1]){
              X--;
            }
        }
        cout << X <<endl;
   }
   return 0;
}