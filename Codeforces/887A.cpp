#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int main(){

     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int c=0,n,i,j;
     string arr;
     cin>>arr;
     n = arr.size();

     for(i=0; i<n; i++){
        if(arr[i]=='1'){
            c=0;
            for(j=i+1; j<n; j++){
                if(arr[j]=='0')
                    c++;
            }
         if(c>=6){
        cout<<"yes"<<endl;
        return 0;
         }
        }
     }
    cout<<"no"<<endl;
}