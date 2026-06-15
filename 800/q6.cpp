#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        unordered_map<int, int> mp;
        for (int x : v) {
            mp[x]++;
        }

        if (mp.size() > 2) {
            cout << "NO" << endl;
        } 
        else if (mp.size() < 2) {
            cout << "YES" << endl;
        } 
        else {
            vector<int> freq;
            for (auto &it : mp) {
                freq.push_back(it.second);
            }
            if (abs(freq[0] - freq[1]) <= 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}