 #include<iostream>
 #include<bits/stdc++.h>

 using namespace std;

 int main(){

    int T;
    cin >> T;
    while(T--)
    {
           long long n;
           cin >> n;
           int j,i;
           if(n%2==0)
           {
             for(i=n/2,j=(n/2)+1; i>0,j<=n; i--,j++)
             {
              cout << j << " "<< i << " ";
             }
             cout <<endl;
           }
           else{
               for(i=n/2,j=(n/2)+1; i>0,j<n; i--,j++)
                {
                  cout << j << " "<< i << " ";
                }
                cout << n <<endl;
           }
    }

    return 0;
 }