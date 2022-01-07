#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cn = 0;
    vector<string> v{"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
    while(n--)
    {
        string str;
        cin >> str;
        if(!isalpha(str[0]))
        {
            if(stoi(str) < 18)
            {
                cn++;
            }
        }
        else if(find(v.begin(),v.end(),str) != v.end())
        {
            cn++;   
        }
    }
    cout<<cn;
    return 0;
}