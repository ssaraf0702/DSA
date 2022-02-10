#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int x[n];
        int y[n];
        unordered_set<int> st;
        unordered_set<int> s;

        for(int i=0; i<n; i++)
        {
            int a,b;
            cin >> a >> b;
            x[i] = a;
            y[i] = b;
        }

         int res = 0;
         for (int i = 0; i < n; i++) { 
           if (st.find(x[i]) == st.end()) {
            st.insert(x[i]);
            res++;
         }
       }

         int r = 0;
         for (int i = 0; i < n; i++) { 
           if (s.find(y[i]) == s.end()) {
            s.insert(y[i]);
            r++;
         }
       }
     cout << (res + r) << endl;  
    
    }
}