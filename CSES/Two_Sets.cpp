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
    float n;cin>>n;
    float ans= (n*(n+1))/2;
    ans=ans/2;
    if(ans%2==0){
        cout<<"YES"<<endl;
        
    }



return 0;
}



int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}