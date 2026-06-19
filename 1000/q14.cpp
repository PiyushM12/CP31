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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0;
        int j = 0;
        bool notposs = false;
        while (i < n && j < n)
        {
            if (v[i] == v[j])
            {
                j++;
            }
            else
            {
                if (j == i + 1)
                {
                    cout << -1 << endl;
                    notposs = true;
                    break;
                }
                else
                {
                    for (int k = i; k < j - 1; k++)
                    {
                        v[k] = k + 1;
                    }
                    v[j - 1] = i;
                    i = j;
                }
            }
        }
        if (notposs)
            continue;
        if (j == i + 1)
        {
            cout << -1 << endl;
            continue;
        }
        for (int k = i; k < j - 1; k++)
        {
            v[k] = k + 1;
        }
        v[j - 1] = i;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] + 1 << " ";
        }
        cout << endl;
    }
}