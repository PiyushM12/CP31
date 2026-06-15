#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--){
        ll n,q;
        cin>>n>>q;

        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        vector<vector<ll>> qu(q, vector<ll>(3));
        for(ll i=0;i<q;i++){
            cin>>qu[i][0]>>qu[i][1]>>qu[i][2];
        }

        ll total = accumulate(v.begin(), v.end(), 0LL);

        vector<ll> mod(n+1,0);
        for(ll i=0;i<n;i++){
            mod[i+1] = mod[i] + (1 - v[i]);
        }

        for(auto &it:qu){
            ll l = it[0];
            ll r = it[1];
            ll k = it[2];

            ll change = mod[r] - mod[l-1];
            ll len = r - l + 1;

            ll ans = total + change + 1LL*(k-1)*len;

            if(ans % 2 == 0) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}
