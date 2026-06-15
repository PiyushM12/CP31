#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            mp[v[i]]++;

        }
        int maxi =0;
        for(auto it:mp){
            maxi =max(maxi,it.second);

        }
        long long step =0;
        int freq= maxi;
        n=n-freq;
        while(n>0){
            step++; //cost of cloning
            int num =min(n,freq);
            step+=num;
            n-=num;
            freq+=num;

        }
        cout<<step<<endl;
    }
}