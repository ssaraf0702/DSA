#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        unordered_set <char> no_cons_rep;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=s[i+1]) no_cons_rep.insert(s[i]);
            else i++;
        }

        vector<char> v;

        for(auto itr: no_cons_rep){
            v.push_back(itr);
        }

        sort(v.begin(), v.end());
        for(char c: v){
            cout<<c;
        }
        cout<<endl;
    }
}   