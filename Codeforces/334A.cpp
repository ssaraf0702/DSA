#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int start = 1;
    int end = n*n;
    while(start < end)
    { 
       cout << start << " " << end << endl;
       start++;
       end--;
    }
    return 0;
}
