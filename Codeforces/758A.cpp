#include<iostream>


using namespace std;

int main(){

    int n;
    cin>>n;
    int max=0, arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(max<arr[i]) max = arr[i];
    }

    int sum=0;
    for(int i=0 ; i<n; i++){
        sum += max-arr[i];
    }

    cout<<sum<<endl;
    return 0;
}