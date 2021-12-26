#include<iostream>
#include<algorithm>

using namespace std;

int main(){
     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int n, c=0, c1=0;
        string s;
        cin >> n >> s;
        for(int i=0; i<n; i++ )
        {
            if(s[i] == '0')
            {
                c1++;
            }
            else
            {
                c++;
            }
        }
        int ans = min(c,c1);
        if(ans == 0)
        {
            cout << 0 << endl;
        }
        else{
           cout << (ans-1) << endl;
        } 
    }
}