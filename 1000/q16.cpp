#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        int base = r / (b + 1);
        int extra = r % (b + 1);

        string ans;

        for (int i = 0; i <= b; i++) {
            ans.append(base, 'R');

            if (extra > 0) {
                ans.push_back('R');
                extra--;
            }

            if (i < b)
                ans.push_back('B');
        }

        cout << ans << '\n';
    }

    return 0;
}