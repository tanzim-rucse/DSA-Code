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


void BFS(vector<vector<pair<int,int>>>& adj_graph,int from,int terget){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
    vector<int>distance(terget+1,LLONG_MAX);
   
    distance[from]=0;
    pq.push({0,from});
    while(!pq.empty()){
        int u=pq.top().second;
        int d=pq.top().first;
        pq.pop();
        if(d>distance[u])continue;
        for(auto v: adj_graph[u]){
            if(distance[u]+v.second<distance[v.first]){
                distance[v.first]=distance[u]+v.second;
                pq.push({distance[v.first],v.first});
               
            }
        }
    }
    if(distance[terget]==LLONG_MAX){
        cout<<-1;
    }
    else
        cout<<distance[terget];


}



int solve() {
    int n,a,b;cin>>n>>a>>b;
    vector<vector<pair<int,int>>>adj_graph(n+1);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
                int w=max(i,j)/__gcd(i,j);
                adj_graph[i].pb({j,w});
                adj_graph[j].pb({i,w});
            
        }
    }
    BFS(adj_graph,a,b);



return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}