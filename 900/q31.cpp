#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        int cnt2 = 0, cnt3 = 0;

        // Count 2s
        while(n % 2 == 0){
            cnt2++;
            n /= 2;
        }

        // Count 3s
        while(n % 3 == 0){
            cnt3++;
            n /= 3;
        }

        // If other primes exist → impossible
        if(n != 1 || cnt2 > cnt3){
            cout << -1 << endl;
        }
        else{
            int ans = (cnt3 - cnt2) + cnt3;
            cout << ans << endl;
        }
    }
}