#include<iostream>
using namespace std;

int main(){


   int T;
   cin >> T;
   while(T--){
       int N,cnt = 0;
       cin >> N;
        for(int i=0; i<N; i++)
        {
            string s;
            cin >> s;
            if( s.compare("START38") == 0){
                cnt++;
            }
        }
        cout << cnt  << " " << (N-cnt) <<endl;
   }

    return 0;
}