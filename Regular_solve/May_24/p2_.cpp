#include<bits/stdc++.h>
using namespace std;

bool check(const string& s)
{
    int bal = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
        {
            bal++;
        }
        else
        {
            bal--;
        }

        if (bal == 0 && i != s.size() - 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
