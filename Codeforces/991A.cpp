#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a,b,c,n;
    int ans = 0;
    cin>>a>>b>>c>>n;
    int sum  = ((a + b) - c);
    ans = n - sum ;
    //cout << ans << endl;
    //cout << sum <<endl;
    if(ans <= 0 || b<c || a<c)
    {
        cout << -1 <<endl;
    }
    else{
        cout << ans <<endl;
    }
    return 0;
}