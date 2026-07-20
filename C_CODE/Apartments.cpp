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
    int n,m,k;cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int c=0,i=0,j=0;
    while(i<n){
        while(j<m){
        int l=a[i]-k;
        int h=a[i]+k;    
        if(b[j]>=l && b[j]<=h){
            c++;
            j++;
            break;
        }
        else if(b[j]>h){
            break;
        }
        j++;
    }
    i++;
    }
    cout<<c<<Endl;
  


return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}