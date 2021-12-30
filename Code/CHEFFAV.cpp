#include<iostream>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin >> t;
     while(t--)
     {
        int n;
        string s;
        int c=0;
        cin >> n >> s;

        for(int i=0; i<n-3;i++)
        {
            string str = s.substr(i,4);
            //cout << str;
            if(str.compare("code")==0)
            {
                c++;
            }
            if(str.compare("chef")==0)
            {
               break;
            }        
        }
        if(c!=0)
        {
            cout << "AC" <<endl;
        }
        else{
            cout << "WA" <<endl;       
             }
     }
     return 0;
}