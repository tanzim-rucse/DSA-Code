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
    string s;cin>>s;
    int c=0;
    int ans=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            ans=max(ans,c);
            c=0;
        } 
    }
    ans=max(ans,c);
    cout<<ans+1<<Endl;


return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}