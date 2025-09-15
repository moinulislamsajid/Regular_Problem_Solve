#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        if (n == 1)
        {
            if (a[0] > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
            continue;
        }

        if (a[n - 2] + 1 < a[n - 1])
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
