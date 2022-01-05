#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        int tempp;
        int mx = 0;
        for(int i = 0 ;i<n;i++){
            cin>>tempp;
            a.push_back(tempp);
        }
        int res = 0;
        mx = a[0];
        for(int i = 1;i<n;i++){
            tempp = a[i] & mx ; 
            res = res | tempp;
            mx = mx | a[i];
        }
        cout<< res<<endl;
        
    }
	return 0;
}