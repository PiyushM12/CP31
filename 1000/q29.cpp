#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long mx = max(a, b);
        long long mn = min(a, b);

        if (mx % mn != 0) {
            cout << -1 << '\n';
            continue;
        }

        long long temp = mx / mn;

        if ((temp & (temp - 1)) != 0) {
            cout << -1 << '\n';
            continue;
        }

        int k = 0;
        while (temp > 1) {
            temp /= 2;
            k++;
        }

        cout << (k + 2) / 3 << '\n';
    }
}