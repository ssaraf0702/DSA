#include<bits/stdc++.h>
using namespace std;

vector<int> bfsgraph(int v, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(v+1,0);
    for(int i=0; i<v;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            queue<int> q;
            q.push(i);
            while(q.empty()==false)
            {
                int temp = q.front();
                q.pop();
                bfs.push_back(temp);
                for(auto it: adj[temp])
                {
                    if(vis[it]==0)
                    {
                      q.push(it);
                      vis[it]=1;
                    }
                }

            }
        }
    }

    return bfs;

}

int main(){

    int n,m;
    cin>> n >> m;
    vector<int> adj[n+1];
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
     vector<int> g;
     g = bfsgraph(n,adj);
     for(auto it: g)
     {
         cout << it << " ";
     }
     cout << endl;
    return 0;
}