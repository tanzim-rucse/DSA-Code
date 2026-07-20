#include<bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>>& adj_graph, int source) {
    queue<int>q;    
    q.push(source);
    vector<int>level(adj_graph.size(),-1);
    vector<int>parent(adj_graph.size());
    level[source]=0;
    while(!q.empty()){  
        int u=q.front();
        q.pop();
        for(int v:adj_graph[u]){
            if(level[v]==-1){
                level[v]=level[u]+1;
                q.push(v);
                parent[v]=u;
            }
        }

    }
    cout<<"Shortest distance:"<<level[1]<<endl;   
    for(int i=;i<)
}

int main() {
    int n,m;cin>>n>>m;
    vector<vector<int>>adj_graph(n);
    
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj_graph[u].push_back(v);
        adj_graph[v].push_back(u);
    }
    BFS(adj_graph,0);

    return 0;
}