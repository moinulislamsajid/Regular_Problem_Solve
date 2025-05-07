#include <iostream>
using namespace std;

bool is_between(int x, int a, int b)
{

    if (a < b)
        return x > a && x < b;
    else
        return x > a || x < b;
}

bool is_intersect(int a, int b, int c, int d)
{

    if (!is_between(b, a, b)) swap(a, b);
    if (!is_between(d, c, d)) swap(c, d);


    return is_between(c, a, b) != is_between(d, a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (is_intersect(a, b, c, d))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
