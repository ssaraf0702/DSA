 #include<iostream>
 #include<bits/stdc++.h>

 using namespace std;

 int main(){

// //     int T;
// //     cin >> T;
// //     while(T--){
     
// //      int x1,y1,x2,y2;
// //      cin >> x1 >> y1 >> x2 >> y2;
// //      int xdiff = abs(x2-x1);
// //      int ydiff = abs(y2-y1);
// //      if((xdiff == 0 && (ydiff == 2 || ydiff == 4)) || (ydiff == 0 && (xdiff == 2 || xdiff == 4)) )
// //      {
// //         cout << "YES" <<endl;
// //      }
// //      else if((xdiff == 2 && ydiff == 4 ) || (ydiff == 2 && xdiff == 4 )  )
// //      {
// //         cout << "YES" <<endl;
// //      }
// //      else if((xdiff == 1 && ydiff == 3 ) || (ydiff == 1 && xdiff == 3 )  )
// //      {
// //         cout << "YES" <<endl;
// //      }
// //      else if((xdiff == 3 && ydiff == 3 ))
// //      {
// //         cout << "YES" <<endl;
// //      }
// //      else if( ydiff != 0 && abs(xdiff/ydiff) == 1){
// //         cout << "YES" <<endl;
// //      }
// //      else{
// //         cout << "NO" <<endl;
// //      }
// //     }
// //     return 0;
// //  }

// #include <iostream>
// #include <vector>
// #include <cmath>
// typedef long long ll;
// long long M = 1000000007;
// using namespace std;

// int main(){
    
//     vector<ll>pre_comp;
//         for(int i=0; i<1000010; i++){
//             ll res = pre_comp[pre_comp.size()-1]*2;
//             res%= M;
//             pre_comp.push_back(res);
//         }
//     int T;
//     cin>>T;
//     while(T--){
//         ll N,X;
//         cin>>N>>X;
//         // vector<ll>pre_comp(N+1,0);
//         // pre_comp[1] = X;
//         // for(int i=2; i<=N; i++){
//         //     pre_comp[i] = (2pre_comp[i-1])%M;
//         // }
//         // cout<<pre_comp[N]<<endl;
//         cout<<(pre_comp[N-1]*X)%M<<endl;

//     }
//     return 0;
// }


int n;
cin>>n;
string s;
cin>>s;
int i = 0;int j = n-1;
int ans = 0;
while(j >= i){
  if(s[i] == '(' and s[j] == ')'){
    i++;j--;
  }else if(s[i] == '(' and s[j] == '('){
        j--;
        ans++;
  }
  else if(s[i] == ')' and s[j] == '('){
    j--;
    ans++;
  }else if(s[i] == ')' and s[j] == ')'){
    ans++;
    i++;
  }
}
cout<<ans<<endl;
 }