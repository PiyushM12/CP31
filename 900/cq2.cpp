#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        
        int maxi =0;
        int sum =0;
        vector<int>v(7);
        for(int i =0;i<7;i++){
            cin>>v[i];

        }
        sort(v.begin(),v.end());

        for(int i =0;i<6;i++){
            v[i]*=-1;
        }
        int ans =0;
        for(int i=0;i<7;i++){
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
}