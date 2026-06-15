#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int pos = 0, neg = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) pos++;
            else neg++;
        }

        // int diff = neg - pos;

        // if (diff <= 0) {
        //     // sum >= 0 already
        //     cout << (neg % 2 == 0 ? 0 : 1) << "\n";
        // } else {
        //     // need to flip some -1s to make sum >= 0
        //     int flips = (diff + 1) / 2; // ceil(diff / 2)
        //     neg -= flips;  // after flipping, neg reduces
        //     // check parity again
        //     if (neg % 2 == 0)
        //         cout << flips << "\n";
        //     else
        //         cout << flips + 1 << "\n";
        // }
        int cnt=0;
        while(neg-pos>0){
            cnt+=1;
            neg--;
            pos++;

        }
        if(neg%2==1)cnt++;
        cout<<cnt<<endl;
    }
}
