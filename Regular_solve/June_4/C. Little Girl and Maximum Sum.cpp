#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i)
            std::cin >> a[i];

        int l = 0, r = n - 1;
        int suml = a[l], sumr = a[r];
        int ans = 0;

        while (l < r) {
            if (suml == sumr) {
                ans = std::max(ans, l + 1 + n - r);
            }

            if (suml <= sumr) {
                ++l;
                suml += a[l];
            } else {
                --r;
                sumr += a[r];
            }
        }

        std::cout << ans << std::endl;
    }
    return 0;
}
