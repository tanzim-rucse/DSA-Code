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
int solve() {
    int n,m,q;cin>>n>>m>>q;
    vector<vector<int>>adj(n, vector<int>(n,LLONG_MAX));
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        a--,b--;
        adj[a][b]=min(adj[a][b],c);
        adj[b][a]=min(adj[b][a],c);
    }
    for(int i=0;i<n;i++){
        adj[i][i]=0;
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][k]!=LLONG_MAX && adj[k][j]!=LLONG_MAX){
                    adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }
    }
    for(int i=0;i<q;i++){
        int a,b;cin>>a>>b;
        a--,b--;
        cout<< (adj[a][b]==LLONG_MAX?-1:adj[a][b])<<endl;
    }


return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}