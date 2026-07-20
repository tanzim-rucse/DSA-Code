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
    int ans=0,three=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' || s[i]=='3')three++;
    }
    ans=three;
    int two=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='2'){
            two++;
        }
        else if(s[i]=='1' || s[i]=='3'){
            three--;
        }
        ans=max(ans,two+three);
    }
    cout<<s.size()-ans<<Endl;
return 0;
}



int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}