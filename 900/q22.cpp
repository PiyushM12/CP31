#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int cnt0=0;
        int cnt1=0;
        vector<int>v(n);
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            if(x==0)cnt0++;
            if(x==1)cnt1++;
                v[i]=x;
        }
        ll ans = 1ll*cnt1*1ll*(pow(2,cnt0));
        cout<<ans<<endl;

    }
}