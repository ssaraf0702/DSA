#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {

        int N,cnt=0,c=0;
        cin >> N;
        map<char,int>m;
        string A,B;
        cin >> A >> B;
        for(int i=0; i<N; i++)
        {
            m[B[i]]++;                //aabbbcd - bbbbbcd
            if(A[i]== B[i])
            {
                cnt++;
                m[B[i]]--;
            }
        }
        map<char,int>::iterator i;
        for(i= m.begin(); i!= m.end(); i++)
        {
            if(i -> second != 0)
            {
                c++;
            }
        }
        cout << c  <<endl;
    }
    return 0;
}