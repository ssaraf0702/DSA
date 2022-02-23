#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

   int a,b,c;
   cin >> a >> b;
   if((a+b) >= 21 || (a+b) < 11)
   {
        cout << -1 <<endl;

   }
   else{
       cout << (21- (a+b)) << endl;
   }
    }

    return 0;

}