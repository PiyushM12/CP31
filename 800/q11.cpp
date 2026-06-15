#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans =INT_MAX;
    while(t--){
        int x;
        cin>>x;
        ans = min(ans,abs(x));
      
    }
      cout<<ans;
}