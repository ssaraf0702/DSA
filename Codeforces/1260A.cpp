#include <iostream>
#include <string>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        long long ans=0;
        int a ,b;
        cin >> a >> b;
        int temp = a;
        for(int i=1; i<=a;i++)
        {
            int buf = b/temp + (b%temp!=0);
            ans = ans + buf*buf;
            b = b - buf;
            temp--;
        }
        cout << ans << endl;
    }
    return 0;
}