#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    string prev="";
    int cnt=0;
    for(int i=1 ; i<=N; i++){
        string s;
        cin>>s;
        if(i==1){
            cnt++;
        }
        if(prev[1]==s[0]){
            cnt++;
        }
        prev = s;
    }
    cout<<cnt<<endl;
    return 0;
}