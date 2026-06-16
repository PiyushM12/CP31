#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int,int>> v;
        int k = n;

        while (n--) {
            int m;
            cin >> m;

            int first = INT_MAX;
            int second = INT_MAX;

            for (int i = 0; i < m; i++) {
                int x;
                cin >> x;

                if (x < first) {
                    second = first;
                    first = x;
                }
                else if (x < second) {
                    second = x;
                }
            }

            v.push_back({second, first});
        }

        sort(v.begin(), v.end());

        long long ans = 0;
        int mini = INT_MAX;
        for(int i =0;i<k;i++){
            mini=min(mini,v[i].second);
        }
        for (int i = 1; i < k; i++) {
            ans += v[i].first;
        }
        ans+=mini;
        cout << ans << '\n';
    }
}