#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long st = a[0] - x;
        long long en = a[0] + x;

        int ans = 0;

        for (int i = 1; i < n; i++) {
            long long L = a[i] - x;
            long long R = a[i] + x;

            long long nst = max(st, L);
            long long nen = min(en, R);

            if (nst > nen) {
                ans++;
                st = L;
                en = R;
            } else {
                st = nst;
                en = nen;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}