#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>div;
        for(int i =1;i*i<=n;i++){
            if(n%i==0){
                div.push_back(i);
                if(i!=n/i){
                    div.push_back(n/i);
                }
            }
        }
        int mini=INT_MIN;
        if(div.size()==2){
            cout<<1<<" "<<n-1<<endl;
            continue;
        }
        for(int i=0;i<div.size();i++){
            if(div[i]>mini &&div[i]!=n){
                mini = div[i];
            }
        }
        cout<<mini<<" "<<n-mini<<endl;
        
    }
}