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
vector<vector<char>> grid;
vector<vector<bool>>visited;
vector<pair<int,int>>direc={{1,0},{-1,0},{0,1},{0,-1}};


void dfs(int i,int j){
    visited[i][j]=true;
    for(auto d:direc) {
        int x=i+d.first;
        int y=j+d.second;
        if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size() && !visited[x][y] && grid[x][y]=='.') {
            dfs(x,y);
        }
    }

}


int solve() {
    int n,m;
    cin >> n >> m;
    grid.resize(n,vector<char>(m));
    visited.resize(n,vector<bool>(m,false));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> grid[i][j];
        }
    }
    int rooms=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(!visited[i][j] && grid[i][j]=='.') {
                rooms++;
                dfs(i,j);
            }
        }
    }
    cout<< rooms << endl;

return 0;
}



int32_t main() {    
    fast_io;
    solve();
    return 0;
}