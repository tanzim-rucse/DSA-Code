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
vector<int>tree;
int n;
void update(int idx,int diff){
    while(idx<=n){
        tree[idx]+=diff;
        idx+=idx &(-idx);
    }
}

int query(int idx){
    int sum=0;
    while(idx>0){
        sum+=tree[idx];
        idx-=idx&(-idx);
    }

}







int solve() {
    int q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    tree.resize(n+1,0);
    for(int i=0;i<q;i++){
        int l,r;cin>>l>>r;
        query(r)
    }



return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}