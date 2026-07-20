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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            ans+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
    }

    cout<<ans<<endl;

return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}