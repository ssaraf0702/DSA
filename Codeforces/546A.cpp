#include <iostream>

using namespace std;

int main(){

    int k,n,w;

    cin>>k>>n>>w;

    ((k*(w*(w+1)/2))-n>0)?cout<<(k*(w*(w+1)/2))-n<<endl:cout<<0<<endl;
    return 0;
}