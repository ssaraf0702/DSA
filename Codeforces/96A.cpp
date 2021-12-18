#include<iostream>

using namespace std;

int main(){
 
  string s;
  cin >> s;
  int c1 = 0;
  int c0 = 0;
  if(s.length() <7)
  {
      cout <<"NO" <<endl;
  } 
  else{
      for(int i=0; i<s.length(); i++)
      {
          if(s[i]=='0')
          {
              c0++;
              c1=0;
          }
         if(s[i]=='1')
         {
           c0=0;
           c1++;
          }
          if(c0>= 7 || c1>=7)
          {
              c0 = -1;
              break;
          }
      }
      if(c0 == -1)
      {
          cout <<"YES" <<endl;
      }
      else 
      {
          cout <<"NO" <<endl;
      }
       
  }

  return 0;
}