#include<iostream>
typedef long long ll;

using namespace std;

ll reversDigits(ll num)
{
    ll rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}


ll solve(ll x){
    ll rev = 0;
    while(x>0)
    {
        ll rem;
        rem = x%10;
        if(rem != 0)
        {
            rev = rev*10 + rem;
        }
        x = x/10;
    }
    rev = reversDigits(rev);
    return rev;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll a,b,c,c1;
    cin >> a >>b;
    c = a + b;
    a = solve(a);
    b = solve(b);
    c = solve(c); 
    c1 = a + b;
    if(c==c1)
    {
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" << endl;
    }

  return 0;
}