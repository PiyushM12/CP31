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
        int i =1;
        int j= (3*n)-1;
        vector<int>ans;
        for(int k =0;k<n;k++){
            ans.push_back(i);
            ans.push_back(j);
            ans.push_back(j+1);
            i+=1;
            j-=2;


        }
        for( i =0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}