#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i;
        bool f=true;
        map<char,int> mpp;
        string s1,s2;

        getline(cin,s1);
        getline(cin,s2);
        //cin >> s1 >> s2;
        
        for(i=0;i<s1.length();i++)
        {
            mpp[s1[i]]++;
        }

        for(i=0;i<s2.length();i++)
        {
            if(mpp[s2[i]]>0 || s2[i]==' ')
            {
                mpp[s2[i]]--;
                continue;
            }

            else
            {
                f=false;
                break;
            }
        }

        if(f==true)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}