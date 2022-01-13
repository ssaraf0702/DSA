#include<iostream>

using namespace std;

int main(){

    int n,i;
    cin >> n;
    string s;
    cin >> s;
    if(n%2==0)
    {
        for(i=0; i<n-2;)
        {
            cout << s.substr(i,2) << "-";
            i=i+2;
        }
    }
    else{
       
        for(i=0; i<n-3;)
        {
            cout << s.substr(i,2) << "-";
            i=i+2;
        }

    }
    cout << s.substr(i);

    return 0;
}