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
vector<int>parent,msize;
int largest_size=1,total;
int find(int x){
            if(parent[x]==x)return x;
            return parent[x]=find(parent[x]);
}
void union_func(int a,int b){
        int x=find(a);
        int y=find(b);
        if(x==y)return ;
        total--;
        parent[x]=y;
        msize[y]+=msize[x];
        largest_size=max(largest_size,msize[y]);

}

int solve() {
        int n,m;cin>>n>>m;
        parent.resize(n+1);
        msize.resize(n+1,1);
        total=n;
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
        for(int i=0;i<m;i++){
            int a,b;cin>>a>>b;
            union_func(a,b);
            cout<<total<<" "<<largest_size<<endl;
        }

        
        
        return 0;
}

int32_t main() {
    fast_io;
    solve();
    return 0;
}
    