#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define all(v) v.begin(), v.end()
typedef long long ll;

using namespace std;

int main(){

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        string s;
        vector<int> vec0,vec1;
        cin >> n;
        int p[n],final[n];
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            cin>> p[i];
            m[p[i]]=i;

        }
        cin >>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0')
            {
                vec0.push_back(p[i]);
            }
            else{
                vec1.push_back(p[i]);
            }
        }
       sort(all(vec0),greater<int>());
       sort(all(vec1),greater<int>());
       c=n;
       for(int i=0; i<vec1.size();i++)
       {
           final[m[vec1[i]]]=c;
           c--;
       }
       for(int i=0; i<vec0.size();i++)
       {
           final[m[vec0[i]]]=c;
           c--;
       }
        for(int i=0; i<n; i++)
        {
            cout << final[i] <<" ";
        }
        cout <<endl;
    }
    return 0;
}