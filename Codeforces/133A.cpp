#include<iostream>
#include<string>

using namespace std;

int main (){
    string p;
    int flag=0;
    getline(cin, p);
    for(int i=0; i<p.length(); i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            flag = 1;
            cout << "YES" <<endl;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "NO" <<endl;
    }
    return 0;
}