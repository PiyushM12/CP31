
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt2=0;
        int cnt3=0;
        vector<int>v(n);
        int ans = 1000;
        bool found = false;
        for(int i =0;i<n;i++){
            cin>>v[i];
            v[i]%=k;
            if(v[i]==2)cnt2++;
            if(v[i]==3)cnt3++;
            if(v[i]==0){
                found=true;

            }
        }
        if(found){
            cout<<0<<endl;
            continue;
        }
        if(k==4){
            if(cnt2>1){
                cout<<0<<endl;
                continue;
            }
            else if(cnt3>=1||cnt2==1){
                cout<<1<<endl;
                continue;
            }
            else if(n>1){
                cout<<2<<endl;
                continue;
            }
            else{
                cout<<3<<endl;
                continue;
            }
        }
        for(int i =0;i<n;i++){
            ans = min(ans,k-v[i]);
        }
        cout<<ans<<endl;
    }
}