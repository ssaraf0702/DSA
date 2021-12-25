#include<iostream>
typedef long long ll;
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--){
      ll g,b,r,w;
      int o=0,e=0;
      int flag=0;
      cin >> r >> g >> b >> w;
      if(r%2==0){e++;}
      else{o++;}
      if(g%2==0){e++;}
      else{o++;}
      if(b%2==0){e++;}
      else{o++;}
      if(w%2==0){e++;}
      else{o++;}

      if(o!=2)
      {
          if(o==3){
           if(r==0 || g==0 ||  b==0)
           {
              cout << "NO" <<endl;
              flag = 1;
           }
         }
         if(flag==0){
          cout << "YES" <<endl; }
      }
      else{
          cout << "NO" <<endl;
      }
    }
    return 0;
}