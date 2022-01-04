#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

bool f = false;
 int n;
 cin>>n;
 if(n<4){
 cout<<"-1";
 return 0;
 }
 for (int i = n / 7; i>= 0; i --) {
   int j = n - (i * 7);
   if (j% 4 == 0) {
   f = true;
   for (int P = 0; P <j / 4; P ++) 
   cout<<4;
   for (int x = 0; x <i; x ++) 
   cout<<7;
   break;
}

}
 if(!f) cout<<-1<<endl;

}