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
vector<int>parent;
struct edges{
    int u,v,w;
    bool operator<(const edges& other)const{
        return w<other.w;
    }
};

int find(int a){
    if(parent[a]==a)return a;
    return parent[a]=find(parent[a]);
}

bool merge(int a,int b){
    int x=find(a);
    int y=find(b);
    if(x==y)return false;
    parent[y]=x;
    return true;
}



int solve() {
    int n,m;cin>>n>>m;
    vector<edges>graph(m);
    for(int i=0;i<m;i++){
        cin>>graph[i].u>>graph[i].v>>graph[i].w;
    }
    sort(graph.begin(),graph.end());
    parent.resize(n+1);
    int cost=0,e_used=0;
    for(int i=1;i<=n;i++)parent[i]=i;
    for(auto e:graph){
        if(merge(e.u, e.v)){
            cost+=e.w;
            e_used++;
            if(e_used==n-1)break;
        }
    }

    if(e_used==n-1)cout<<cost<<endl;
    else
    cout<<"IMPOSSIBLE"<<Endl;




return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}