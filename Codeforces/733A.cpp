#include<bits/stdc++.h>

using namespace std;

int main(){

    char str[105];
    int i, l, maxx=0, c=1;
    cin >> str;
    l = strlen(str);
    for(i=0; i<l; i++)
    {
        if((str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y'))
        {
            c = 1;
        }
        else
        {
            c++;
        }
        if(c > maxx)
            {
                maxx = c;
            }
    }
    cout << maxx << endl;
    return 0;
}