#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int Y,W;
    cin>>Y>>W;
    int numerator = 6 - max(Y,W) + 1;
    int GCF = __gcd(numerator, 6);
    cout<<numerator/GCF<<"/"<<6/GCF<<endl;
    return 0; 
}