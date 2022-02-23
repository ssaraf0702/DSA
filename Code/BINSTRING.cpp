#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--)
    {
        int n,c=0;
        string s;
        cin >> n >> s;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                c++;
            }
        }
        cout << (n -c) <<endl;
    }

    return 0;
}