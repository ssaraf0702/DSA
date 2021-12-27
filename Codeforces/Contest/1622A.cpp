#include<iostream>
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;

        if(a==b==c)
        {
            cout << "NO" <<endl;
        }
        else if(a==b && c%2==0 || a==c && b%2==0 || b==c && a%2==0)
        {
            cout << "YES" <<endl;
        }
        else if((a+b)==c || (a+c)==b || (b+c)==a)
        {
            cout << "YES" <<endl;
        } 
        else{
            cout << "NO" <<endl;
        }
    }

    return 0;
}