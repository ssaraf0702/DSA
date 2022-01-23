#include<iostream>

using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--)
   {
       int N;
       cin >> N;
       string str = "";
       for(int i=0; i<N; i++)
       { 
           int x = i/26;
           str = str + char(((i - x*26)+97));
       }
       cout << str <<endl;
   }

    return 0;
}