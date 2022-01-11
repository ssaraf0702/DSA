 #include<iostream>
 #include<map>

 using namespace std;

 int main(){

     ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

     int n,d;
     int flag = 0;
     map<int,int> m;
     int a[10000], c[10000];
     cin >> n;
     for(int i=0; i<n; i++)
     {
        cin >> a[i] >> d;
        c[i] = a[i] + d;
        m[a[i]] = c[i]; 
     }
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
         {
             if(m[a[i]] == c[j] && m[c[i]] == a[j])
             {
                 flag = 1;
                 break;
             }
         }
     }

     if(flag == 1)
     {
         cout << "YES" << endl;
     }
     else{
         cout << "NO" << endl;
     }
     return 0;
 }