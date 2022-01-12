#include<iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int x = a+b+c+d+e;
    if(x<5)
    {
        cout << "-1" <<endl;
    }  
    else if(x%5==0)
    {
        cout << x/5 <<endl;
    }
    else{
        cout << "-1" <<endl;
    }

    return 0;
}