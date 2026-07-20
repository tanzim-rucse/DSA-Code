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
    vector<int>v;
    v.pb(n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else if(n%2==1){
            n=n*3;
            n++;
        }
        v.pb(n);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


return 0;
}



int32_t main() {
    fast_io;
    int t;
    solve();
    return 0;
}