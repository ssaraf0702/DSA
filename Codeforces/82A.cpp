#include<iostream>

using namespace std;

int main(){

   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   
   int n;
   cin >> n;

   int i=1;
   while(i*5 < n)
   {
       n = n - i*5;
       i = i*2;  
   }
   string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
   cout << name[(n-1)/i] << endl;

   return 0;
}