#include <bits/stdc++.h>
using namespace std;
     bool cmp(const pair<int, int> &a, const pair<int,  int> &b){
        
            if (a.first == b.first)
                return a.second > b.second; 
            return a.first < b.first;       
        }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        int m=n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({b[i], a[i]});
        }
       
        sort(v.begin(),v.end(),cmp);
        long long  ans =0;
        ans+=p;
        n--;
        for(int i =0;i<m;i++){
            if(n<=0) break;
            int cost = v[i].first;
            int ppl = v[i].second;
            if(cost>=p){
                break;
            }
            else{
                ans+=(1LL*cost*min(n,ppl));
                n-=min(ppl,n);
            }
        }
        ans += (long long)max(n, 0) * p;
       cout<<ans<<endl;
    }
}