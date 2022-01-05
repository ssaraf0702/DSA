#include<iostream>
typedef long long ll;
using namespace std;

int main(){

   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   
   ll n ,k, count =0, box =0;
   cin >> n >> k;
   ll min = INT64_MAX;
   for(int i=1; i<=k;i++)
   {
       ll size;
       cin >> size;
       if(min > (n%size))
       {
           min = n%size;
           box = i;
           count = n/size; 
       }
   }
   cout << box << " " << count << endl;
   return 0;
}