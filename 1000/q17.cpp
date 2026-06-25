#include<bits/stdc++.h>
using namespace std;
int find(int num){
    int temp=1;
    while(temp<=num){
        temp*=2;
    }
    return temp/2;
}
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        vector<int>ans;
        int num = find(n-1);
        for(int i =1;i<num;i++){
            ans.push_back(i);
        }
        ans.push_back(0);
        for(int i=num;i<n;i++){
            ans.push_back(i);
        }
        for(int i =0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}