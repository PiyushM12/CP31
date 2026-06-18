#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long temp = s - b * k;
        if (temp > ((k - 1) * n))
        {
            cout << -1 << endl;
            continue;
        }
        if (s < b * k)
        {
            cout << -1 << endl;
            continue;
        }
        vector<long long> v(n, 0);
        v[0] = b * k;
        for (int i = 0; i < n && temp > 0; i++)
        {
            long long add = min(temp, k - 1);
            v[i] += add;
            temp -= add;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}