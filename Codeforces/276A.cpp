#include<iostream>
#include<vector>
typedef long long ll;

using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int  maxf= INT32_MIN;
    for(int i=0; i<n ; i++)
    {
        int f,t;
        cin >> f >> t;
        if(t <= k)
        {
            if(maxf < f)
            {
                maxf = f;
            }
        }
        else
        {
            int fun = f - (t-k);  
            if(maxf < fun)
            {
                maxf = fun;
            } 
        }
    }
    cout << maxf <<endl;
    return 0;
}