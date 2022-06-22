#include<iostream>
using namespace std;

int main(){


   int T;
   cin >> T;
   while(T--){
       int N;
       cin >> N;
       int arr[N];
       int flag = 0;
       for(int i=0; i<N; i++)
       {
         cin >> arr[i];
       }
       for(int i=0; i<N-1; i++)
       {
         if(arr[i] > arr[i+1])
         {
             flag = 1;
             break;
         }
       }
       if(flag ==0){
           cout << "YES" <<endl;
       }
       else{
           cout <<"NO" <<endl;
       }
   }
 return 0;  
}
