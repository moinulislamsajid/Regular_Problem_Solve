#include <bits/stdc++.h>
using namespace std;
const long long A = 100000000000000LL, N = 228228;

vector<long long> a[N];
long long c[N], o, x, y, i, j, n, m;

void go(int v, int pr, int k) {
    if (k > m) return;
    int ok = 1;
    for (int i = 0; i < a[v].size(); i++)
        if (a[v][i] != pr) {
            ok = 0;
            go(a[v][i], v, k * c[a[v][i]] + c[a[v][i]]);
        }
    o += ok;
}

int main() {
    cin >> n >> m;
    for (i = 0; i < n; i++) scanf("%lld", &c[i]);
    for (i = 1; i < n; i++) {
        scanf("%lld%lld", &x, &y);
        x--, y--;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    go(0, -1, c[0]);
    cout << o << "\n";
}
