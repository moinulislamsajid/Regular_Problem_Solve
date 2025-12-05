
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        cout << min({l, r, (l + r) / 3}) << "\n";
    }

    return 0;
}
