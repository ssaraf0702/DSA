#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int n,k;
        string s;
        cin >> n >> k >> s;
        string str="";
        int start = 0;
        int end = k-1,falg=1; 
        while(start <= end)
        {
            if(falg)
            {
                str = str + s[start];
                start++; 
            }
            else{
                 str = str + s[end];
                 end--;
            }
            falg=falg==1?0:1;   
        }
        reverse(str.begin(),str.end());
        str = str + s.substr(k,((n-1)-(k-1)));
        cout << str <<endl;
    }
    return 0;
}
