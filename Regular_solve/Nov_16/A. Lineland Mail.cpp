#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {

        long long mn, mx;

        // mini
        if (i == 0) {
            mn = v[i+1] - v[i];
        }
        else if (i == n-1) {
            mn = v[i] - v[i-1];
        }
        else {
            mn = min(v[i] - v[i-1], v[i+1] - v[i]);
        }

        // maxi
        mx = max(v[i] - v[0], v[n-1] - v[i]);

        cout << mn << " " << mx << "\n";
    }
}

int main() {
    solve();
}
