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
    int n,x;cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0,c=0;
    int i=0,j=n-1;
    sort(a.begin(),a.end());
    while(i<=j){
        if(i==j){
            c++;
            break;
        }
        else if(a[i]+a[j]>x){
            j--;
            c++;
        }
        else{
            i++;j--;
            c++;
        }
    }
    cout<<c<<endl;


return 0;
}



int32_t main() {
    fast_io;
    solve();
    return 0;
}