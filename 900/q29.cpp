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
       unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]=i+1;
        }
        vector<vector<int>>temp;
        bool comp = false;
        for(int i =0;i<n;i++){
           
            for(auto& it:temp){
                if(it.size()==1){
                    if(it[0]<v[i]){
                        it.push_back(v[i]);
                      
                    }
                   // else continue;
                }
                else if(it.size()==2&&it[1]>v[i]){
                    cout<<"YES"<<endl;
                    cout<<mp[it[0]]<<" "<<mp[it[1]]<<" "<<mp[v[i]]<<endl;
                    comp= true;
                    break;


                }
            }
            temp.push_back({v[i]});
            if(comp)break;
        }
        if(comp==false)cout<<"NO"<<endl;

    }
}