#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto&it:s){
            mp1[it]++;
        }
        int ans =0;
        for(int i =0;i<n;i++){
            mp2[s[i]]++;
            mp1[s[i]]--;
            if(mp1[s[i]]==0){
                mp1.erase(s[i]);
            }
            int n1= mp1.size();
            int n2 = mp2.size();
            ans = max(ans,n1+n2);
        }
        cout<<ans<<endl;
    }
}