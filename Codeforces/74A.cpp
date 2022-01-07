#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    long total = INT32_MIN;
    string leader = "";
    while(n--)
    {
        string s;
        long h,uh,a,b,c,d,e;
        cin >> s >> h >> uh >> a >> b >> c >> d >> e;
        long sum = (a + b + c + d + e + (100*h) - (50*uh));
        while(sum > total)
        {
            leader = s;
            total = sum;
        }

    }
    cout << leader <<endl;
    return 0;
}