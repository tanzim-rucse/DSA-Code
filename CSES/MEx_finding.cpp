Code :

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long
int main() {
	// Your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m, i, j, ans=10000000;

    cin>>n>>m;

    ll a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    ll c[m+1];
    for(i=0; i<=m; i++){
        c[i]=0;
    }

    set<ll> s;

    for(i=0; i<=m; i++)
    {
        s.insert(i);
    }

    for(i=0; i<m; i++)
    {
        if(a[i]<=m){
            c[a[i]]++;
            if(c[a[i]]==1){
                s.erase(a[i]);
            }
        }
    }

    ans=*s.begin();

    for(i=m; i<n && ans>0; i++)
    {
        if(a[i-m]<=m){
            c[a[i-m]]--;
            if(c[a[i-m]]==0){
                s.insert(a[i-m]);
            }
        }

        if(a[i]<=m){
            c[a[i]]++;
            if(c[a[i]]==1){
                s.erase(a[i]);
            }
        }

        ans=min(ans, *s.begin());
    }

    cout<<ans<<"\n";
    return 0;
}