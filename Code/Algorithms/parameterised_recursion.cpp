#include<iostream>

using namespace std;

void fun(int n, int sum){
    
   if(n<1)
   {
    cout << sum << endl;
    return;
   }
   fun(n-1,sum+n);
}

int main(){
    
    int n;
    cin >> n;
    fun(n,0);
    //return 0;
}