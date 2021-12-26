#include<iostream>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int a,b,cnt=0;
    cin>> a >>b;
    while(a<=b)
    {
        a = a*3;
        b = b*2;
        cnt++;
    }
    cout << cnt << endl;
   return 0;
}