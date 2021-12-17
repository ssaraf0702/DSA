#include <iostream>

using namespace std;

int main(){
    int a[5];
    for(int i=1 ;i<=4; i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.length(); i++){
        int index = int(s[i])-48;
        sum += a[index];
    }
    cout<<sum<<endl;
    return 0;
}