#include<iostream>
#include<string>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin >> t;
     
     while(t--)
     {
         int res=0;
         int n,k,c=0;
         string s;
         cin >> n >> k;
         cin >> s;
         int p[n];
         int a[n];
         for(int i=0;i<n;i++)
         {
             if(s[i]=='1')
             {
                 c++;
             }
             p[i] = c;
         }
          a[0] = p[n-k];
          for(int i=1;i<k;i++)
         {
             a[i] = p[n-k+i] - p[i-1]; 
             if(a[i]%2)
             {
                 res++;
             }
         }
         if(a[0]%2)
         {
            res++;
         }
      cout << res <<endl;
     }
     return 0;
}




/*
#include<iostream>
#include<string>
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin >> t;
     ll res=0;
     while(t--)
     {
         ll n,k,c=0;
         string s;
         cin >> n >> k;
         cin >> s;
         for(ll i=0; i<=(n-k); i++)
         {
             string str = s.substr(i,k);
             ll num = stoll(str,0,2);
             res = res ^ num;
         }
         while(res>0)
         {
             c++;
             res = res & (res-1);
         }
         cout << c <<endl;
     }
     return 0;
}*/
