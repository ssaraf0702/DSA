#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int eve,odd,cnto=0,cnte=0;
    for(int i=0; i<n ; i++)
    {
        int num;
        cin >> num;
        if(num%2==0)
        {
            cnte++;
            eve = i+1;
        }
        else{
            cnto++;
            odd = i+1;
        }
    }

    if(cnte == 1)
    {
        cout << eve << endl;
    }
    else{
        cout << odd << endl;
    }
    return 0;
}