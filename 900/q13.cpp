#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i =0;i<n;i++){
            cin>>v[i];
        }
        ll cnt =0;
        ll i=0;
        bool started = false;
        while(i<n){
            if(v[i]>0){
                started=true;
                i++;

            }
            else{
                if(started== true){
                    cnt++;
                }
                started= false;
                i++;
            }
        }
        if(started)cnt++;

        
       cnt>=2?cout<<2<<endl:cout<<cnt<<endl;
    }
}