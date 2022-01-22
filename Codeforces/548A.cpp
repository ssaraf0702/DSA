#include<iostream>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> str >> n;
    if(str.length()%n != 0)
    {
        cout << "NO" <<endl;
        return 0;
    }
    int l  = str.length()/n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<l/2; j++)
        {
            if(str[j+i*l] != str[(i+1)*l-j-1])
            {
                cout << "NO" <<endl;
                return 0;
            }

        }
    }
     cout << "YES" <<endl;
    return 0;
}