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
vector<vector<pair<int,int>>>adj_graph;
vector<int>dist;
void dijkstra(int source){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    dist[source]=0;
    pq.push({0,source});
    while (!pq.empty())
    {
        auto d=pq.top().first;
        auto u=pq.top().second;
        pq.pop();
        if(d>dist[u])continue;
        for(auto [v,w]:adj_graph[u]){
            if(dist[u]+w <dist[v]){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
            
        }    
    }
    
    
}


int solve() {
    int n,k;cin>>n>>k;
    adj_graph.assign(n+1,{});
    dist.assign(n+1,LLONG_MAX);
    for(int i=0;i<k;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj_graph[u].pb({v,w});

        // for undirected graph:
        // adj_graph[v].pb({u,w});

    }
    int source,destination;
    cin>>source>>destination;
    dijkstra(source);
    if(dist[destination]==LLONG_MAX){
        cout<<"NO"<<Endl;
    }
    else cout<<dist[destination]<<Endl;


return 0;
}



int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}