#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int x=0;
    for(int i=0; i<N; i++){
        string s;
        cin>>s;
        for(int j=0; j<s.length(); j++){
            if(s[j]=='+'){
                x++;
                break;    
            }
            if(s[j]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x<<endl; 
    return 0;
}