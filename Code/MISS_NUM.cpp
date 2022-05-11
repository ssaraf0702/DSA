#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int T;
    cin >> T;
    while(T--)
    {
        int A,B;
        cin >> A >> B;
        if(B-A > 1 && A%2 == 0)
        {
                cout << A << " " << A+2 <<endl;
            }
        else if(B-A > 2 && A%2 !=0) 
        { 
                if(__gcd(A,A+3)>1) 
                {
                    cout << A << " " << A+3 <<endl;
                }
                else{
                  cout << A+1 << " " << A+3 <<endl;
                }
        }
        else{
            cout << -1 <<endl;
        }

    }     

    return 0;
}