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
vector<vector<pair<int,int>>>adj;
vector<int>dis;
int dijkstra(int src) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,src});
    dis[src]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dis[u])continue;
        for(auto [v,w]:adj[u]){
             if(w+dis[u]<dis[v]){
                dis[v]=w+dis[u];
                pq.push({dis[v],v});
             }
        }
    }


return 0;
}



int32_t main() {
    fast_io;
    int n,m;cin>>n>>m;
    adj.resize(n+1,{});
    dis.resize(n+1,LLONG_MAX);
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    int src,target;cin>>src>>target;
    dijkstra(src);
    cout<<dis[target]<<Endl;
    return 0;
}