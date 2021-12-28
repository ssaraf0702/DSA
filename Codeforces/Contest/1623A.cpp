#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define all(v) v.begin(), v.end()
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    { 
        int n,m,rb,cb,rd,cd;
        cin >> n >> m >> rb >> cb >> rd >> cd; 
        int r = rb;
        int cnt =0;
        int c = cb;
        int x = 1;
        int y=1;
        while(r!=rd && c!=cd)
        {
            if(r==n || r==0)
            {
               x*=-1;
            }
            if(c==m || c==0)
            {
                y*=-1;
            }
            r = r+x;
            c = c+y;
            cnt++;
        }
       cout << cnt <<endl;
    }
    return 0;
}