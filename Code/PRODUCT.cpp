#include<bits/stdc++.h>

using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){

    int t;
    cin >> t;
    while(t--)
    {
        long b,c;
        cin >> b >> c;
        if(b%c==0)
        {
            cout << 1 <<endl;
        }
        else{
            long res = lcm(b,c);
            cout << res/b <<endl;
        }
    }

    return 0;
}