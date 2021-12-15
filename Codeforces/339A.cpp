#include<iostream>
#include <map>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0; i<s.length(); i+=2){
        m[s[i]]++;
    }

    string res;
    for(auto itr = m.begin(); itr!=m.end(); itr++){
        while((*itr).second!=0){
            res   = res + (*itr).first+"+";
            (*itr).second--;
        }
    }

    cout<<res.substr(0,res.length()-1)<<endl;

    return 0;
}