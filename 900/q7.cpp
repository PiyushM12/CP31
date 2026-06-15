#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;

        cin>>n>>k;
        vector<int>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int i =0;
        int j =1;
        int maxi =0;
        while(j<n){
            if(v[j]-v[j-1]<=k){
                j++;
            }
            else{
                maxi = max(maxi,j-i);
                i=j;
                j++;
            }
        }
        maxi = max(maxi,j-i);
        cout<<n-maxi<<endl;

        
    }
}