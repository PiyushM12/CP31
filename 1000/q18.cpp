#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        long long w, h;
        cin >> w >> h;

        // Bottom side
        int k;
        cin >> k;
        vector<long long> bottom(k);
        for (int i = 0; i < k; i++) {
            cin >> bottom[i];
        }

        // Top side
        cin >> k;
        vector<long long> top(k);
        for (int i = 0; i < k; i++) {
            cin >> top[i];
        }

        // Left side
        cin >> k;
        vector<long long> left(k);
        for (int i = 0; i < k; i++) {
            cin >> left[i];
        }

        cin >> k;
        vector<long long> right(k);
        for (int i = 0; i < k; i++) {
            cin >> right[i];
        }
        sort(bottom.begin(),bottom.end());
        sort(top.begin(),top.end());
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        vector<long long>v;
        long long temp =bottom.back()-bottom.front();
        temp*=h;
        v.push_back((temp));
        temp =top.back()-top.front();
        temp*=h;
        v.push_back((temp));
        temp =left.back()-left.front();
        temp*=w;
        v.push_back((temp));
        temp =right.back()-right.front();
        temp*=w;
        v.push_back((temp));
        // Process here...
        long long ans = max(v[0],max(v[1],max(v[2],v[3])));
        cout<<ans<<endl;
    }

    return 0;
}