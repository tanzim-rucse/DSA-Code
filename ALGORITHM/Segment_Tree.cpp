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
vector<int>tree,arr;
void init(int node,int d,int e){
    if(d==e){
        tree[node]=arr[d];
    }
    int mid=(d+e)/2;
    init(node*2,d,mid);
    init(node*2 +1 ,mid+1,e);
    tree[node]=tree[node*2] +tree[node*2 +1];
}


int solve() {



return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}