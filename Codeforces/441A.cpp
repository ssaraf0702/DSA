#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,v;
    cin>> n >>v;
    vector<int> vec;
    for(int i=1; i<=n; i++)
    {
        int obj,flag=0;
        cin>>obj;
        while(obj--)
        {
            int num;
            cin>>num;
            if(num<v)
            {
                flag =1;
            }
            
        }
        if(flag==1){vec.push_back(i);}
    }
   cout << vec.size() << endl;
   for(auto& i: vec)
   {
       cout << i << " "; 
   }
   cout << endl;
   return 0;
}