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
    set<int>s;
    for(int i=0;i<n-1;i++){
        int a;cin>>a;
        s.insert(a);
    }
    int j=1;
    for(auto i: s){
        if(i!=j){
            cout<<j<<endl;
            return 0;
        }
        j++;
        
    }
    cout<<j<<endl;

return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}