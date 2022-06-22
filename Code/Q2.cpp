#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        string str;
        if(N%2 ==0){
            for(int i=0; i<(N-4)/2; i++)
            {
                str = str + '0';
            }
            str = str + "1001";
            for(int i=(N+4)/2; i<N; i++){
                str = str + '0';
            }
            cout << str <<endl;
        }
        else{
            for(int i=0; i<(N-3)/2; i++)
            {
                str = str + '0';
            }
            str = str + "101";
            for(int i=(N+3)/2; i<N; i++){
                str = str + '0';
            }
            cout << str <<endl;
        }
    }
    return 0;
}