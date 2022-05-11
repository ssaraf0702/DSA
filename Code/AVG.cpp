#include<iostream>

using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--)
    {
      int N,K,V;
      int sum = 0;
      cin >> N >> K >> V;
      for(int i=0; i<N;i++)
      {
          int x;
          cin >> x;
          sum += x;
      }
      if(sum >= (N+K)*V )
      {
          cout << -1 <<endl;
      }
      else if( ((N+K)*V - sum) % K != 0)
      {

          cout << -1 <<endl;
      }
      else{

          cout << ((N+K)*V - sum) / K <<endl;
      }
    }

    return 0;
}