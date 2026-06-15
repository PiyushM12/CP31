#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int maxi =0;
        int mini = 1000;
        for(int i =0;i<n;i++){
            cin>>v[i];
         
        }
        for(int i =0;i<n-1;i++){
            mini=min(mini,v[i]);
            maxi=max(maxi,v[i+1]);
        }
        int maxcon =-2000;
        for(int i =0;i<n-1;i++){
            maxcon =max(maxcon,v[i]-v[i+1]);
        }
        vector<int>ans;
        ans.push_back(maxcon);
        ans.push_back(v[n-1]-v[0]);
        ans.push_back(maxi-v[0]);
        ans.push_back(v[n-1]-mini);
        int temp = *max_element(ans.begin(),ans.end());
        cout<<temp<<endl;

    }
}
