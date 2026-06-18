#include<bits/stdc++.h>
using namespace std;
struct compare{
    bool operator()(const pair<int,int>a,const pair<int,int>b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    }
};
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq;
        for(int i =1;i<=n;i++){
            int x=0;
            cin>>x;
            x%=k;
            if(x==0)x=k;
            pq.push({x,i});
        }
        vector<int>ans;
        while(!pq.empty()){
            auto tp = pq.top();
            pq.pop();
            int val = tp.first;
            int index = tp.second;
            val-=k;
            if(val<=0){
                ans.push_back(index);
            }
            else{
                pq.push({val,index});
            }
        }
        for(int i =0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}