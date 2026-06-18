#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        unordered_map<int, int> freqa;
        unordered_map<int, int> freqb;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int i = 0;
        int j = 0;
        while (i < n && j < n)
        {
            if (a[i] == a[j])
                j++;
            else
            {
                int len = j - i;
                if (len > freqa[a[i]])
                {
                    freqa[a[i]] = len;
                    
                }
                i = j;
            }
        }
        int len = j - i;
        if (len > freqa[a[i]])
        {
            freqa[a[i]] = len;
            
        }

        i = 0;
        j = 0;
        while (i < n && j < n)
        {
            if (b[i] == b[j])
                j++;
            else
            {
                int len = j - i;
                if (len > freqb[b[i]])
                {
                    freqb[b[i]] = len;
                   // i = j;
                }
                i = j;
            }
        }
        len = j - i;
        if (len > freqb[b[i]])
        {
            freqb[b[i]] = len;
           // i = j;
        }
        unordered_map<int,int>total;
        for(auto&it:freqa){
            int ind= it.first;
            int val = it.second;
            total[ind]+=val;
        }
        for(auto&it:freqb){
            int ind= it.first;
            int val = it.second;
            total[ind]+=val;
        }
        int ans =INT_MIN;
        for(auto &it:total){
            ans = max(ans,it.second);
        }
        cout<<ans<<endl;
    }
}