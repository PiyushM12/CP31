#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int total2 = count(a.begin(), a.end(), 2);
        if (total2 % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int left2 = 0;
        int target = total2 / 2;
        int ans = -1;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) left2++;
            if (left2 == target) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }
}
