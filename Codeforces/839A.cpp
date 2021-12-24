#include<iostream>

using namespace std;

int main(){
    
    int n,k;
    int sum=0,cnt=0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
      if(k>0){
        int num;
        cin >> num;
        sum =  sum + num;    
        if(sum <= 8 )
        {
            k = k - sum;
            sum=0;
            cnt++;
        }
        else
        {
            k = k-8;
            sum = sum - 8;
            cnt++;
        }
     }
  }
  if(cnt <= n && k<=0)
  {
      cout << cnt <<endl;
  }
  else 
  {
      cout << -1 <<endl;
  }
    return 0;
}