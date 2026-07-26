#include <bits/stdc++.h>
using namespace std;

#define int long long int

int solve() {
    int n;
    cin >> n;

    set<int> missing;
    map<int, int> m;
    vector<int> a(n);

    for (int i = 0; i <= n; i++) {
        missing.insert(i);
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        m[a[i]]++;
        missing.erase(a[i]);
    }

    int query;
    cin >> query;

    while (query--) {

        int pos, nw_value;
        cin >> pos >> nw_value;
        pos--;
        int old_value = a[pos];

        // old value remove
        m[old_value]--;

        if (m[old_value] == 0) {
            missing.insert(old_value);
        }

        // actual array update
        a[pos] = nw_value;

        // new value add
        m[nw_value]++;
        missing.erase(nw_value);

        // current MEX
        cout << *missing.begin() << '\n';
    }

    return 0;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}