#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
        int n,flag=0;
        cin >> n;
        map<int,int> mp;
        for(int i=1; i <= 2*n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
        }

        for(int i=0; i<=n; i++)
        {
            if(mp[i] == 0)
            {
                flag = 1;
                break;
            }
            
            if(mp[i] == 1)
            {   
                break;
            }
        }
        if(flag==1)
        {
                cout << "YES" <<endl;
         }
        else
        {
            cout << "No" <<endl;
        }
    }
    return 0;
}