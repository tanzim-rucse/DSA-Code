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


void BFS(vector<vector<pair<int,int>>>& adj_graph,int terget){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
    vector<int>distance(terget+1,LLONG_MAX);
   
    distance[1]=0;
    pq.push({0,1});
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
    for(int i=1;i<=terget;i++){
    cout<<distance[i]<<" ";
}
cout<<Endl;

}



int solve() {
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>>adj_graph(n+1);
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        adj_graph[a].pb({b,w});
    }
    BFS(adj_graph,n);



return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}