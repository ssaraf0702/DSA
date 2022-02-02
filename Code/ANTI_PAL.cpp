#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int T;
   cin >> T;
   while(T--)
   {
       int n,flag=0;
       string s;
       map<char,int> m;
       cin >> n >> s;
       string str;
       if(n%2 != 0)
       {
           cout << "NO" <<endl;
       }
       else
       {
           for(int i=0; i<n; i++)
           {
               m[s[i]]++;
           } 
           for(auto i: m)
           {
               if(i.second > n/2)
               {
                   cout << "NO" <<endl;
                   flag = 1;
                   break;

               }
           }
           if(flag==0)
           {
             for(auto i: m)
             {
               while(i.second !=0)
               {
                str = str + i.first;
                 i.second--;
               }
              }     
              cout << str << endl;
            }
        }
    }   
    return 0;
}   