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
int memory[20][20];
int LCS(int i,int j,string s1,string s2);{
    if(memory[i][j]!=empty()){
        return memory[i][j];
    }

    return 0;
}




int solve() {
    string s1,s2;
    cin>>s1>>s2;
    int ans=LCS(0,0,s1,s2);
    cout<<ans<<Endl;

return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}