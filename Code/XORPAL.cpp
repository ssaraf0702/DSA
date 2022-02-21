#include<iostream>
using namespace std;

int main(){
   
   int T;
   cin >> T;
   while(T--)
   {
       int n;
       string str;
       cin >> n >> str;

       int count0 = 0, count1=0; 
       for(int i=0; i<n; i++)
       {
           if(str[i] == '0')
           {
               count0++;
           }
           else{
               count1++;
           }
       }

       if(n%2 ==0)
       {
           if(count0%2 == 0 || count0 == (n/2))
           {
               cout << "YES" << endl;
           }
           else{
               cout << "NO" << endl;
           }
       }
       else{
           cout << "YES" <<endl;
       }

   }

    return 0;
}