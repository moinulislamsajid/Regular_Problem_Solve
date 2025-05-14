#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> st;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            st[x]++;
        }

        if (st.size() >= 3)
        {
            cout << "NO\n";
        }
        else
        {
            int first = st.begin()->second;
            int last = st.rbegin()->second;

            if (abs(first - last) <= 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}
