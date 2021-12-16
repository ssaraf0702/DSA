#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n][3];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
   int sum = 0, c=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum= sum + arr[j][i];
        }
        if(sum == 0)
        {
            c++;
        }
    }
    if(c==3)
    cout << "YES" <<endl;
    else 
    cout <<"NO" <<endl;

    return 0;
}