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

struct edge{
    int u,v,w;
    
};
bool comp(edge a,edge b){
    return a.w<b.w;
}
vector<int>rep;
int find(int x){
    if(x==rep[x])return x;
    return rep[x]=find(rep[x]);
}



vector<edge>Edges_vec;
int MIST(int n){
    sort(Edges_vec.begin(),Edges_vec.end(),comp);
    for(int i=1;i<=n;i++){
        rep[i]=i;
    }
    int sum=0;
    for(auto a:Edges_vec){
        int u=find(a.u);
        int v=find(a.v);
        if(u!=v){
            rep[u]=v;
            sum+=a.w;
        }
    }

    return sum;
}


int solve() {
    int n,m;cin>>n>>m;
    rep.resize(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edge ed;
        ed.u=u;
        ed.v=v;
        ed.w=w;
        Edges_vec.push_back(ed);
    }
    cout<<MIST(n)<<Endl;


return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}