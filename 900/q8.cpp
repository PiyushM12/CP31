#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<char>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        int maxi =0;
        int i =0;
        int j =1;
        while(j<n){
            if(v[j]!=v[j-1]){
                maxi = max(maxi,j-i);
                i=j;
                
            }
            j++;
        }
        maxi = max(maxi,j-i);
        cout<<maxi+1<<endl;
    }
}