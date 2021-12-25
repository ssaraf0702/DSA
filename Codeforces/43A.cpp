#include<iostream>
#include<map>
using namespace std;

int main(){

    int n;
    cin >> n;
    string win;
    map<string,int> m;
    while(n--){
      string s;
      cin >> s;
       m[s]++;
    }
    int max = INT32_MIN;
    for(auto& i : m)
    {
       if(i.second>max)
       {
           win = i.first;
           max = i.second;
       }
    }
    cout << win <<endl;
    return 0;
}