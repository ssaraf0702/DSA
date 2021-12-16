#include <iostream>
 
using namespace std;
 
int main(){
    int d;
    string s,r;
    cin>>d>>r>>s;
    if(s[0]=='w'){
        if(d!=5 && d!=6){
            cout<<52<<endl;
        }else  cout<<53<<endl;
    }else{
        if(d<=29)cout<<12<<endl;
        else if(d==30) cout<<11<<endl;
        else cout<<7<<endl;
    }
    
    return 0;
}