#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define pb push_back
#define ff first
#define ss second
#define int long long int
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define Endl "\n"
int BFS(vector<vector<int>>& adj_graph, int source,int n) {
    queue<int> q;
    q.push(source);
    vector<int> level(adj_graph.size(), -1);
    vector<int> parent(adj_graph.size());
    level[source] = 0;
    bool flag=false;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj_graph[u]) {
            if (level[v] == -1) {
                level[v] = level[u] + 1;
                q.push(v);
                parent[v] = u;
                if(v==n){
                    flag=true;
                    break;
                }
            }
        }
    }
    if(!flag){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    else{
        vector<int>path;
        int temp=n;
        while(temp!=source){
            path.push_back(temp);
            temp=parent[temp];
        }
        path.push_back(source);
        reverse(path.begin(),path.end());
        cout<<path.size()<<Endl;
        for(int i=0;i<path.size();i++){
            cout<<path[i]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}


int solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj_graph(n+1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj_graph[u].push_back(v);
        adj_graph[v].push_back(u);
    }

    BFS(adj_graph, 1, n);
    return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}