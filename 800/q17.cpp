#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> ans;
        bool possible = false;

        if (x != 1) {
            // we can use 1 freely
            possible = true;
            ans.assign(n, 1);
        } else {
            if (k == 1) {
                possible = false;
            } else if (n % 2 == 0) {
                // use 2s
                possible = true;
                ans.assign(n / 2, 2);
            } else if (k >= 3) {
                // use one 3 and the rest 2s
                possible = true;
                ans.push_back(3);
                n -= 3;
                for (int i = 0; i < n / 2; i++) ans.push_back(2);
            }
        }

        if (!possible) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << ans.size() << "\n";
            for (int val : ans) cout << val << " ";
            cout << "\n";
        }
    }
    return 0;
}
