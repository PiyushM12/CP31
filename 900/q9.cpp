#include<bits/stdc++.h>
#include <numeric>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int g = 0;

        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;

            if(x != i){
                g = gcd(g, abs(i - x));
            }
        }

        cout << g << "\n";
    }
}
