#include<iostream>
typedef long long ll;

using namespace std;
int strsub(string str, string s1)
{
    int cnt = 0;
    for(int i=0; i<str.size()-1; i++)
    {
        if(str[i]==s1[0] && str[i+1]==s1[1])
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n,max=0;
    string s,gram;
    cin >> n >> s;

    for(int i=0; i<n-1; i++)
    {
        string sub = s.substr(i,2);
        int cnt = strsub(s,sub);

        if(max < cnt)
        {
            max = cnt;
            gram = sub; 
        }
    }
    cout << gram << endl;
    return 0;
}