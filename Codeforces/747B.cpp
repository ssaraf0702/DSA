#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    string s;
    cin >> n >> s;
    map<char,int> m;
    for(int i=0; i<n; i++)
    {
        m[s[i]]++;
    }
    
    if(n%4 == 0)
    { 
            int val = n/4;
            if(m['A'] > val || m['C'] > val || m['G'] > val || m['T'] > val )
            {
                cout << "===" <<endl;
            }
            else{
                 for(int i=0; i<n; i++)
                 {
                     if(s[i] == '?')
                     {
                         if(m['A']<val)
                         {
                             s[i] = 'A';
                             m['A']++;
                         }
                         else if(m['C']<val)
                         {
                             s[i] = 'C';
                             m['C']++;
                         }
                         else if(m['G']<val)
                         {
                             s[i] = 'G';
                             m['G']++;
                         }
                         else
                         {
                             s[i] = 'T';
                             m['T']++;
                         }
                     }
                 }
                 cout << s <<endl;
             }
             
        }

    else{
        cout << "===" <<endl;
    }

    return 0;
}