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
vector<vector<int>>grid;
vector<pair<int,int>>direc{{1,0},{-1,0},{0,1},{0,-1}};
using pii=pair<int,int>;
void bfs(pair<int,int>start,pair<int,int>end){
    queue<pair<int,int>>q;
    q.push(start);
    while(!q.empty()){
        pii p=q.front(); q.pop();
        for(int i=0;i<4;i++){
            int x=direc[i].first;
               int y= direc[i].second;
        }

    }




}



int solve() {
    int n,m;cin>>n>>m;
    grid.assign(n+1,{});
    pair<int,int>start,end;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='A'){
                start={i,j};
            }
            if(grid[i][j]=='B'){
                end={i,j};
            }
        }
    }
    bfs(start,end);



return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}