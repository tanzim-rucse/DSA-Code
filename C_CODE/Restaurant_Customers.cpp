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
    int n;cin>>n;
    map<int,int> a;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        a[x]++;
        a[y]--;
    }
    int c=0,m=0;
    for(auto l: a){
        c += l.second;
        m = max(m, c);
    }
    cout<<m<<endl;

return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}