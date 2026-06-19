#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<char>v(n);
        vector<int>freq(n+1,0);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        for(int i =0;i<n;i++){
            if(v[i]=='W'){
                freq[i+1]= 1+ freq[i];
            }
            else{
                freq[i+1]= freq[i];
            }
        }
        int mini = INT_MAX;
        for(int i =0;i<=n-k;i++){
            mini = min(mini,freq[k+i]-freq[i]);
        }
        cout<<mini<<endl;

    }
}