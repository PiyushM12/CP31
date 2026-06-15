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
       for(int i =0;i<n;i++){
        cin>>v[i];
       }
       vector<int>ans;
       ans.push_back(v[0]);
       for(int i =1;i<n;i++){
        if(v[i]<v[i-1]){
            ans.push_back(1);
            ans.push_back(v[i]);
        }
        else{
            ans.push_back(v[i]);
        }
       }
       int m = ans.size();
       cout<<m<<endl;
       for(int i =0;i<m;i++){
        cout<<ans[i]<<" ";

       }
       cout<<endl;

     }
}