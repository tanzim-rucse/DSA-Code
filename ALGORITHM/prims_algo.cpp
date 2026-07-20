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
int prims(int n){
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<bool>isvisit(n+1,false);
    pq.push({0,1});
    int cost=0;
    while(!pq.empty()){
        auto [w,u]=pq.top();
        pq.pop();
        if(!isvisit[u]){
            isvisit[u]=true;
            cost+=w;
            for(auto [v,d]:adj[u]){
                if(!isvisit[v])
                pq.push({d,v});
            }
        }
    }
    return cost;

}


int solve() {

    int n,m;cin>>n>>m;
    adj.resize(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    cout<<prims(n)<<endl;


return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}