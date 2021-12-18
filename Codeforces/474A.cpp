#include<iostream>

using namespace std;

int main(){
    
    char C;
    string s, ans = "";
    cin >> C;
    cin >> s;
 
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for(int i=0; i<s.length(); i++)
    {
        int index = str.find(s[i]);
        if(C=='R'){
        ans = ans + str[index-1];
        }
        else{
            ans = ans + str[index+1];
        }
    }
     cout << ans <<endl;


    return 0;

}