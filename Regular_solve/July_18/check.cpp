#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b;
    cin >> a >> b;

    long long int max_teams = min((a + b) / 4, min(a, b));
    cout << max_teams << endl;
}

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
