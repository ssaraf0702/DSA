#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m, c=0;
    cin >> n >> m;
    int intersection = n*m;
    while (intersection > 0)
    {
        intersection = intersection - (n+m-1) ;
        n--;
        m--;
        c++;
    }
    if(c%2==0)
    cout << "Malvika" <<endl;
    else
    cout << "Akshat" <<endl;

    return 0;
}