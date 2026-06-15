#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
         int x;
        for(int i =0;i<n;i++){
           
            cin>>x;
            ans.push_back(n+1-x);
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}