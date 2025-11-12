#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin >> s;
    int m;
    cin>>m;
    string a,b;
    cin >> a >> b;

    deque<char> qu;

    for(char c : s)
        qu.push_back(c);

    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == 'V')
            qu.push_front(a[i]);
        else
            qu.push_back(a[i]);
    }

    for(char c : qu)
        cout << c;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}
