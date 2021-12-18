#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s,ans="";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i]=='o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
        else
        {
            ans = ans + "." + s[i];
        }
    }
    cout << ans <<endl;
 return 0;
}
