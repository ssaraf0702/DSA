#include<iostream>
typedef long long ll;

using namespace std;
int main()
{
    int n,b,d,sum=0, cnt=0;
    cin >> n >> b >> d;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        if(num <= b)
        {
            sum = sum + num;
        }
        if(sum > d)
        {
            cnt++;
            sum = 0;
        }
    }
    cout << cnt <<endl;
   return 0;
}