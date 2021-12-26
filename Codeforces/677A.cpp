#include<iostream>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,h,cnt=0;
    cin >> n >> h;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        if(num>h)
        {
            cnt++;
        }
    }
    cout << (2*cnt + (n-cnt)) << endl;
    return 0;
}